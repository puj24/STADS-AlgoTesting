#include <stdio.h>
//N_i_4 - Number of input centroids & stars
#define N_i_4 22
double UIS_Est_4[3][50]={{0.103578911547931,0.0838088534043478,0.121838941354108,0.092509282666757,0.0838056274209881,0.131657095309946,0.0834649152207942,0.118838036922759,0.115242619373836,0.132903226683286,0.112873586040275,0.0824012429880282,0.0890728540268778,0.148736878197519,0.119127512210861,0.0843508607759057,0.112903624495026,0.111086915527406,0.0734035626217796,0.134848442748877,0.106099752242783,0.079782428983849,0.999931245364208,0.999923084560495,0.999050725383814,0.999865807733414,0.999922994883146,0.99927844384124,0.999884288711665,0.999717908632629,0.99975770089148,0.998797888062827,0.999837040084652,0.999299632313027,0.999437312137677,0.997817654989139,0.999279940005493,0.999739032054164,0.999781044172943,0.99944086661002,0.999758785381093,0.998793966653896,0.99955985752007,0.999652954521882,0,0,0,0,0,0},
{0.994400030142164,0.995905124089514,0.992536158052502,0.994677899099019,0.995905011724685,0.991112026473286,0.996315977302228,0.992524982794508,0.993132454129319,0.989304281394265,0.993278019192177,0.996581800738046,0.994082596697678,0.988835121492384,0.992878941492676,0.995216287059761,0.993441510699567,0.993810671494978,0.996904879244806,0.989185212413771,0.992735189659252,0.9955306940394,-0.00826897016074712,0.0114439909922867,-0.0264004166163787,0.00256904658207711,0.0114470956101234,-0.0365155809140595,0.0119461749687471,-0.0236946617379832,-0.0199932118123777,-0.0382773276257502,-0.0176677506009869,0.0132477032887667,0.00578997906461199,-0.0534951594687108,-0.0237113001761443,0.0107079518203267,-0.0176176387310637,-0.0156186963323691,0.0219456128847528,-0.0402043868889042,-0.0112410006524048,0.0152748146110029,0,0,0,0,0,0},
{-0.020975917996793,-0.0338977861120492,0.00521989732559119,-0.0453641892294272,-0.0339090612407629,-0.0190620102445515,-0.0196997791736642,-0.0277791200203857,-0.0201759072889644,-0.0601146500625852,-0.0256579454375142,0.00589487843308569,-0.0621756995803665,0.00907984400740686,0.000208266259625449,-0.0492896972738534,-0.0180758511514055,0.00021545604635493,-0.0281527748602052,-0.0576932667659445,-0.0567422751238394,-0.0505311908712528,0.00831436569230709,-0.00478121670632475,0.0346506293241177,-0.0161792003902253,-0.0047925260576794,0.0104500729537473,0.00941796640379935,0.00163283934442497,0.00920928822482668,-0.0306206628123336,0.00370727170068328,0.0349963314737616,-0.0330383905396112,0.0387065279428853,0.0296205291407087,-0.0201793844112665,0.0112908156481764,0.029563668153495,0.000872426750020156,-0.0281818993444991,-0.0274541643251213,-0.0214627713558302,0,0,0,0,0,0},};