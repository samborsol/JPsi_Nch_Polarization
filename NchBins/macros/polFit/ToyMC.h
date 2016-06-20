namespace ToyMC{

double ScenarioSig [3][9]={{-1,-0.5,0,0.5,1,0,0,0.5,1},{0,0,0,0,0,0.5,-0.5,-0.75,-1},{0,0,0,0,0,0,0,0,0}};//lamth_Signal,lamph_Signal,lamthph_Signal

double ScenarioBkg [3][9]={{-1,-0.5,0,-0.25,1,0,0,2,4},{0,0,0,0.25,0,0.5,0.8,0.4,-0.4},{0,0,0,0,0,0,0,0,0}};////lamth_Bkg,lamph_Bkg,lamthph_Bkg


int MarkerStyle[6][4]={{0,0,0,0},{0,33,27,34},{0,20,24,29},{0,21,25,22},
	{0,33,27,34},{0,20,24,29}}; // for each state, rapBin (1= closed, 2=open)
int MarkerColor[6] = {0,1,1,1,1,1};//{0,600,632,418}; // for each frame
double MarkerSize[6][4]={{0,0,0},{0,2.75,2.75,2.75},{0,1.65,1.65,1.65},{0,1.65,1.65,1.65},
	{0,2.75,2.75,2.75},{0,1.65,1.65,1.65}};// for each state, rapBin

const int ncpmBins=10;
const int nPtBins=2;
const int nRapBins=1;


double ptCentre[nRapBins][nPtBins][ncpmBins]={{{16.7861, 17.0368, 17.1673, 17.2539, 17.3216, 17.3824, 17.4487, 17.4848, 17.5594, 17.705},{29.5751, 29.978, 30.3282, 30.5233, 30.6976, 30.9134, 30.9534, 31.1015, 31.4049, 32.1582}}};

double cpmCentre[nRapBins][nPtBins][ncpmBins]={{{7.05878, 13.1666, 17.975, 21.9679, 25.9818, 29.9597, 33.9346, 37.9035, 47.1413, 67.9748},{7.39645, 13.3353, 18.024, 22.0347, 26.023, 29.9885, 33.9635, 37.9251, 47.5329, 68.5438}}};

double meanRap[nRapBins][nPtBins][ncpmBins]={{{0.596064, 0.588341, 0.586598, 0.588407, 0.585524, 0.592221, 0.581198, 0.589668, 0.582596, 0.592355},{0.596627, 0.580679, 0.586538, 0.590071, 0.585723, 0.574759, 0.574075, 0.565244, 0.575972, 0.571249}}};

//double fracBackground[nRapBins][nPtBins][ncpmBins]={{{0.0211389, 0.0207694, 0.0203594, 0.0209538, 0.0219131, 0.0222242, 0.0229098, 0.0226215, 0.0242877, 0.0236274},{0.0474287, 0.0344562, 0.0342599, 0.0301678, 0.0294436, 0.031011, 0.0265846, 0.0284522, 0.0285542, 0.026393}}};
//for toymc:
double fracBackground[nRapBins][nPtBins][ncpmBins]={{{0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001},{0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001,0.001}}};

int numEvents[nRapBins][nPtBins][ncpmBins]={{{97144, 169007, 140993, 145381, 132627, 116173, 90423, 73962, 149092, 22170},{4510, 11846, 12301, 14841, 13755, 14097, 12105, 10142, 25415, 4694}}};

//CS 
int binCosth[nRapBins][nPtBins][ncpmBins]={{{64, 64, 64, 64, 64, 64, 64, 64, 64, 64},{64, 64, 64, 64, 64, 64, 64, 64, 64, 64}}};

//CS 
int binPhi[nRapBins][nPtBins][ncpmBins]={{{16, 16, 16, 16, 16, 16, 16, 16, 16, 16},{16, 16, 16, 16, 16, 16, 16, 16, 16, 16}}};

//HX double binCosth[nRapBins][nPtBins]={{64, 64, 64, 64, 64, 64, 64, 64, 64, 64},{64, 64, 64, 64, 64, 64, 64, 64, 64, 64}};

//HX double binPhi[nRapBins][nPtBins]={{16, 16, 16, 16, 16, 16, 16, 16, 16, 16},{16, 16, 16, 16, 16, 16, 16, 16, 16, 16}};

//PHX double binPhi[nRapBins][nPtBins]={{16, 16, 16, 16, 16, 16, 16, 16, 16, 16},{16, 16, 16, 16, 16, 16, 16, 16, 16, 16}};

//PHX double binCosth[nRapBins][nPtBins]={{64, 64, 64, 64, 64, 64, 64, 64, 64, 64},{64, 64, 64, 64, 64, 64, 64, 64, 64, 64}};

//double fracSignal[nRapBins][nPtBins]={{0.0358924, 0.0334104, 0.0277951, 0.026459, 0.0288096, 0.0335685, 0.041832, 0.0521845, 0.0490234, 0.0390959},{0.0140043, 0.0165193, 0.0167022, 0.0172273, 0.0181807, 0.0198244, 0.0239186, 0.0287584, 0.0290342, 0.0270056}};
//double fracSignal[nRapBins][nPtBins]={{4.29656e-14, 2.75335e-14, 2.45359e-14, 2.55351e-14, 4.62963e-14},{0, 0, 0, 0, 0}};

const int nEffs=3;
const int FidCuts=3;

}