#include <stdio.h>
//N_i_2 - Number of input centroids & stars
#define N_i_2 24
double UIS_Est_2[3][50]={{0.103578911547931,0.0838088534043478,0.121838941354108,0.092509282666757,0.0838056274209881,0.131657095309946,0.0834649152207942,0.118838036922759,0.115242619373836,0.132903226683286,0.112873586040275,0.0824012429880282,0.0890728540268778,0.148736878197519,0.119127512210861,0.0843508607759057,0.112903624495026,0.111086915527406,0.0734035626217796,0.134848442748877,0.106099752242783,0.079782428983849,0.149448898143286,0.131838230181462,0.99998457670097,0.999833217103426,0.999298157325044,0.999764933580097,0.999833064517751,0.999464401165033,0.99985420130892,0.9998094139471,0.999866115994893,0.99881229414832,0.999911290229978,0.999375509931295,0.999248806558758,0.998201076765122,0.999493676474107,0.999585176653663,0.999888174466253,0.99961902878911,0.999647757881987,0.998827427953553,0.999470059336285,0.999473565811628,0.998739805358425,0.99871925832573,0,0},
{0.994400030142164,0.995905124089514,0.992536158052502,0.994677899099019,0.995905011724685,0.991112026473286,0.996315977302228,0.992524982794508,0.993132454129319,0.989304281394265,0.993278019192177,0.996581800738046,0.994082596697678,0.988835121492384,0.992878941492676,0.995216287059761,0.993441510699567,0.993810671494978,0.996904879244806,0.989185212413771,0.992735189659252,0.9955306940394,0.988426893543669,0.991172291982337,-0.00392144196516584,0.0158480834839383,-0.0221709860909946,0.00702264744716029,0.0158512368539922,-0.032179667731624,0.016288310201493,-0.0193187046591714,-0.0156501143982837,-0.0337647975454747,-0.0133004116359551,0.0174759646633429,0.0103149907615971,-0.049288264077838,-0.0194590312123112,0.0151782456238015,-0.0132835405751782,-0.0113656288586619,0.0263241870151221,-0.0357024477805811,-0.00673942266060912,0.0197502276977283,-0.0501784217422725,-0.0322210997209601,0,0},
{-0.020975917996793,-0.0338977861120492,0.00521989732559119,-0.0453641892294272,-0.0339090612407629,-0.0190620102445515,-0.0196997791736642,-0.0277791200203857,-0.0201759072889644,-0.0601146500625852,-0.0256579454375142,0.00589487843308569,-0.0621756995803665,0.00907984400740686,0.000208266259625449,-0.0492896972738534,-0.0180758511514055,0.00021545604635493,-0.0281527748602052,-0.0576932667659445,-0.0567422751238394,-0.0505311908712528,-0.0260250449254053,0.0140060226010436,0.00393302086134745,-0.00907613499783695,0.0301933791173447,-0.0205124354091972,-0.00908743017808858,0.00594809116478379,0.00512514152785623,-0.00281485932993753,0.0047774474992459,-0.0351274750712592,-0.00071464742003521,0.0307112488943311,-0.0373553685095657,0.0341361592617655,0.0251741294298519,-0.0244764269052543,0.00686921482647023,0.0251519335909447,-0.00337599459559721,-0.0326971618059514,-0.0318462034240299,-0.0257394590012586,-0.000962903977608333,0.0390082527431837,0,0},};