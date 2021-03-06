#ifndef __CINT__
#endif

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "lifetimeFit.cc"

//========================================================
// code to read input arguments 
template<typename T>
void fromSplit(const std::string& key, const std::string &arg, T& out)
{
  const char delim = '=';
  // Skip if key or delimiter not there                                                                                                                                            
  if ((arg.find(key) == std::string::npos) ||
      (arg.find(delim) == std::string::npos))
    return;

  std::string skey, sval;
  std::stringstream sstr(arg);
  std::getline(sstr, skey, delim); // Dummy read to skip key                                                                                                                       
  std::getline(sstr, sval, delim); // Get value                                                                                                                                    
  T tout;
  if (!(std::istringstream(sval) >> std::boolalpha >> tout))
    return;
  out = tout;
  std::cout << std::boolalpha << skey << ": "  << out << std::endl;
}

// Special version for string without the conversion
template<>
void fromSplit(const std::string& key, const std::string &arg, std::string &out)
{
  const char delim = '=';
  // Skip if key or delimiter not there                                                                                                                                            
  if ((arg.find(key) == std::string::npos) ||
      (arg.find(delim) == std::string::npos))
    return;
  std::string skey, sval;
  std::stringstream sstr(arg);
  std::getline(sstr, skey, delim); // Dummy read to skip key                                                                                                                       
  std::getline(sstr, sval, delim); // Get value                                                                                                                                    
  out = sval;
  std::cout << skey << ": "  << out << std::endl;
}


//===================================================
int main(int argc, char* argv[]){

  // Set defaults
    int
      rapMin = 999,
      rapMax = 999,
      ptMin = 999,
      ptMax = 999,
      cpmMin = 999,
      cpmMax = 999,      
      nState = 999;

    // Loop over argument list
    for (int i=1; i < argc; i++)
      {
	std::string arg = argv[i];
        fromSplit("rapMin", arg, rapMin);
        fromSplit("rapMax", arg, rapMax);
        fromSplit("ptMin", arg, ptMin);
        fromSplit("ptMax", arg, ptMax);
        fromSplit("cpmMin", arg, cpmMin);
        fromSplit("cpmMax", arg, cpmMax);        
        fromSplit("nState", arg, nState);
      }

    std::cout << "-----------------------\n"
	      << "Fitting lifetime for \n"
	      << "y bins " << rapMin << " - " << rapMax << "\n"
	      << "and pT bins "  << ptMin << " - " << ptMax << "\n"
	      << "and Nch bins "  << cpmMin << " - " << cpmMax << "\n"	      
	      << "-----------------------" << std::endl;


    for(int iRap = rapMin; iRap <= rapMax; iRap++){
      for(int iPT = ptMin; iPT <= ptMax; iPT++){
        for(int iCPM = cpmMin; iCPM <= cpmMax; iCPM++){        

	std::stringstream temp;
	temp << "tmpFiles/fit_Psi" << nState-3 << "S_rap" << iRap << "_pt" << iPT << "_cpm" << iCPM <<".root";	
	const std::string infilename = temp.str().c_str();

	lifetimeFit(infilename.c_str(), iRap, iPT, iCPM, nState);
        }
      }
    }

    return 0;
}
