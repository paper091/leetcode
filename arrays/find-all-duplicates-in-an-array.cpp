class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        nums.insert(nums.begin(), 0);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != i){

                if(nums[i] == nums[nums[i]]){ continue; }
                
                int temp = nums[nums[i]];
                nums[nums[i]] = nums[i];
                nums[i] = temp;
                i--;
            }
        }

        int newSize = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != i){
                nums[newSize] = nums[i];
                newSize++;
            }
        }
        nums.resize(newSize);

        return nums;
    }
};

/*
[13317,41084,38410,41947,23299,18306,3208,33679,16383,46410,32216,44571,18567,10971,29191,31390,36710,32813,1668,4553,7823,35059,49924,30113,16709,28789,22737,23075,23801,3164,19487,35890,30864,22118,21917,33533,29024,1721,33732,47260,40056,29124,47280,16920,8729,27233,4311,1722,16069,22215,13226,3611,45635,28508,30200,10459,30347,35320,12522,24910,48596,37284,27998,37248,5767,24817,14979,37769,42352,10374,11709,8924,43441,13697,4070,39929,25475,18046,35602,1523,42,41557,2061,10379,17699,5518,39987,34379,20061,20688,8267,31711,23009,2902,15441,25485,38031,44707,18350,13669,18070,29549,21847,2516,42096,15508,3631,11811,12840,9622,45354,33820,6873,43371,45631,45836,32836,8811,11304,24196,12573,48576,20137,25513,9779,23702,20395,17964,37322,38078,13284,36,28087,1346,49541,37191,6023,9715,37344,23720,41772,17582,29795,28538,15717,46237,31653,8178,23817,11385,23372,6282,4064,14077,45993,30290,13918,9238,5569,38321,15085,503,37448,11514,5974,14026,668,41498,35579,7616,5099,49725,49700,22937,1475,18576,30404,574,16468,49057,45143,1835,5459,37906,46362,20347,19774,8957,45911,31116,30999,32034,60,17938,5855,48715,10791,49591,47472,24800,46864,36352,37526,49830,38291,15675,2315,30323,20216,40388,32031,34813,43713,3558,39569,20448,12591,48686,47420,26110,14961,1196,17888,39344,45131,9283,43771,46011,14591,6288,32628,25854,15978,32935,26660,47064,6765,42104,49298,18790,38327,3041,41210,874,41387,31277,5737,37975,8947,10090,25927,42217,29649,40824,36113,42529,5694,5997,12753,16110,38129,47574,17645,12375,1005,42552,22298,38693,47175,16965,37290,1774,20083,22409,10889,5612,36666,17924,12703,32188,3354,25762,16291,42722,44986,36694,32365,36873,12184,26006,2438,35128,32274,4943,35663,33168,35437,29320,8810,13267,20517,23893,21672,18511,23409,18050,16080,45607,37442,30735,16473,38258,10936,38155,29460,28476,17825,6905,12777,47995,10351,17360,45325,20669,36549,42750,7773,5837,3102,9548,31289,836,14937,47948,25408,21948,48117,44222,42659,37663,12869,2979,27081,6094,1089,969,36303,43917,40425,33525,34425,35468,405,12543,16506,20529,2558,27831,46444,6113,33587,31093,13788,46301,36665,12846,12389,31049,33811,19523,44071,10344,41721,41379,4196,30611,9480,33328,24231,216,14134,7247,1313,9135,41088,18889,21793,43464,28194,8303,6111,26416,11874,7002,14310,49587,42777,16608,46860,46587,18463,12595,5455,46854,13506,16467,4445,20262,37059,34676,25008,31457,6893,22186,35588,16313,34370,2336,19846,15046,35652,34569,37228,37919,24813,28877,20955,45288,29644,38261,39240,45206,24637,43986,33759,36493,11603,43096,3113,5386,7764,16680,42046,35101,29777,31834,20535,9933,28848,41897,2830,44768,34137,35737,36532,17122,7353,19124,17519,15506,12278,43905,27086,21565,40976,45030,37979,12994,11744,12116,18508,4004,25824,43025,29701,26286,12775,37860,17853,1088,1887,12056,39995,18232,20708,22835,2670,30652,39131,29281,42134,10388,5580,46537,41506,23220,14046,30977,49847,31303,32638,27629,7865,9191,43643,21747,23945,24537,37025,24650,39420,9814,10449,33041,16275,32355,16761,49324,20732,49986,42693,8984,27941,33617,34849,48880,11544,18177,2729,14808,36535,34081,992,46343,16869,49304,46570,21810,41391,8082,31702,28594,29813,36754,36091,15383,15561,22949,29133,10983,1203,6151,33036,39263,8814,1023,28074,39034,49299,5173,42983,36239,2864,6644,16795,6148,36244,40859,47311,5745,11449,46797,24520,14736,33199,46584,18768,9776,33585,36259,25763,24168,32422,41648,32292,2808,19703,34257,4778,3724,11384,5702,39610,47754,37412,1493,4066,38570,26425,8595,12638,41253,13325,39246,27019,40998,22860,21373,14678,47438,18191,7343,21520,40612,35563,20592,39505,35880,12963,9354,47589,45304,39226,33352,5815,14892,43417,39654,38905,22316,15657,1972,19869,43330,26014,10105,22531,15322,30497,13125,11152,36726,3672,18894,13175,41533,35955,18780,11783,30707,22134,4832,4016,12596,6526,27583,26002,24506,20178,44188,19621,36111,16168,28851,10095,10764,18672,11683,37973,20239,6417,46131,15585,17547,10862,14069,39004,34649,35045,2791,37017,24237,2404,8438,19054,38308,31096,13885,35535,8216,8179,19692,43081,36278,34841,68,35656,12343,3048,2174,18325,30362,11249,3099,479,38371,20231,24342,4836,31436,30451,25494,17037,34553,25121,37904,31652,23930,13035,47561,38210,21002,17425,29368,40441,49957,11713,25786,9083,48246,43576,12607,36822,1085,23141,11090,24396,24688,45318,17735,35667,9049,8674,9644,24085,32701,45218,20354,4837,13932,33516,15637,26223,20532,39614,17158,4634,27664,23092,23690,43454,13982,45894,40523,39596,46430,43776,11228,24446,18183,30111,46650,25483,37091,30245,30590,36919,15947,39034,3007,16869,125,12607,36869,36906,17977,8000,48504,8048,10540,31685,27063,27859,20323,2068,46804,25083,4449,48807,44572,87,43835,45830,46901,47250,21745,39409,38016,31045,12679,17885,37949,2409,48034,15128,24606,10071,45918,24729,39572,29262,39643,45689,22005,44287,49433,17080,14784,44360,45544,10062,38119,20348,12194,27999,38234,11100,15684,842,25845,34116,6039,41902,18319,22948,6269,29066,11251,36841,32327,18575,43468,4568,47236,12307,2778,35974,2531,5541,44257,48823,49177,24745,8848,6017,16878,47519,9695,47148,27122,27252,7537,18168,42013,28804,1145,4555,36020,10265,18297,20726,4216,22037,7622,4898,23752,37529,37095,19052,31862,19664,10605,46219,23479,17355,48716,650,16308,37433,3654,23942,44638,48482,8729,5125,2494,12928,31599,2993,38011,14139,24436,49360,3028,9647,18037,1057,413,19261,1443,26485,29606,1243,5990,34840,8663,48600,45934,203,13496,4640,39397,22351,14908,24328,12433,29279,49278,13671,25909,2506,21588,30130,26407,12140,9568,8482,19420,42729,6582,43203,9040,12597,37575,28412,44722,46067,10763,47030,2603,20535,32638,13658,14303,25898,46913,46972,38876,10202,13841,6078,33679,27515,17509,17666,32519,10286,47024,34336,36657,22957,42759,27616,23234,9072,45613,1813,38115,33311,31753,32247,24166,26372,13897,21674,46471,22203,23760,4416,29790,16282,26299,824,25217,4327,31905,11217,31607,31035,46360,16463,36615,5457,11973,8808,16382,37770,27131,45676,14335,128,31877,25311,3332,45301,4046,2005,28595,17095,39101,35432,47213,24226,40143,41769,29344,16579,30428,13313,11963,46021,19676,17154,12370,6586,34098,44703,12263,43254,13350,31012,39496,11211,22001,1668,42169,44173,12465,19789,22326,43474,6573,39850,46858,33656,44274,14789,10670,12578,45339,18310,22057,9328,48767,20701,38581,5547,34932,44664,23042,378,38322,9937,37524,40659,19011,31255,20552,41489,2310,47032,14836,143,14898,36952,15068,10366,7288,21344,45472,40969,30065,28838,48514,27842,29766,2740,48342,8312,33599,14568,38947,22392,39955,10488,9382,35837,35934,29391,901,30294,24081,42456,32225,2690,354,27334,43844,37514,39876,17102,38922,35467,2114,33795,16717,30318,33925,49787,34008,41670,39302,28130,26957,28710,30876,7019,31874,20396,29446,41998,31157,37998,38133,42723,30529,46095,18673,32746,8777,43582,24076,11524,24560,13452,49811,29041,29723,46184,24480,27399,33023,17336,13709,31723,17748,46838,42595,16512,44187,28293,19536,8905,15804,14958,45943,47388,28167,30331,657,24918,13036,38271,41442,18037,5127,5393,31159,35173,9683,28339,38714,33114,24207,39715,23496,40855,48813,6669,38554,5994,43879,26970,32895,47972,541,40794,8427,34408,1529,14986,4408,19806,2500,26113,40091,16117,24689,49069,15458,37859,26631,22165,45289,44250,6204,39386,12299,4730,14076,35295,1430,23980,37897,37890,31991,46210,13372,43110,23957,3033,49978,1342,5977,20568,16131,26120,12299,26536,31187,31924,1640,10799,19083,28528,29343,20602,38282,12817,25403,27879,5220,11472,22970,44925,19397,31758,21645,7272,30975,35846,45320,43476,11422,13614,49209,45126,2765,38344,45557,19586,39458,12683,31246,29484,28116,41929,39345,33758,45997,20509,23019,27171,21146,5204,33484,3086,35135,19221,23043,40522,2423,35437,20841,39630,46361,3851,34955,39900,45175,14581,35134,34583,1024,11221,8935,29215,9717,40196,29010,19563,39209,11490,47248,12241,6561,39551,222,6708,25819,31656,40672,3643,17387,29313,7148,43834,38847,8843,5011,22463,29460,43283,37386,33292,5187,22983,35879,42284,12515,9061,7192,21651,11314,3410,40204,1302,40462,8628,1893,7028,24333,269,15861,37776,28844,6788,25285,3884,28802,12597,44947,6313,39557,31741,44499,22413,39076,33394,11174,14594,4768,2965,24492,828,41827,19605,11318,4692,16889,1941,32177,46105,7047,37719,24428,5809,8652,36584,28440,20461,26274,21205,5564,33146,13841,26267,30882,12676,23617,45805,29042,8389,2505,37742,31272,2427,10361,4574,48964,17800,5408,16193,43214,49923,1307,8923,33972,21387,20907,29176,1842,9372,29554,26472,13581,4314,30249,20967,27836,23258,11217,1787,25395,31152,30036,11638,28461,21155,7463,16204,43253,48973,18639,28334,3169,43727,19868,1589,44028,6385,7334,24266,10287,15622,5363,19937,15931,49630,28195,12775,20005,38933,46312,36704,44462,7961,6341,47811,26974,11624,41361,41858,27997,15512,7224,688,19150,44497,25647,711,19560,38245,32434,43042,28097,20207,4283,7589,30106,17193,15441,12989,26257,2423,43579,38833,36055,38401,46271,18343,10143,8495,36892,10708,35119,25788,21280,33771,47463,14877,14343,38631,10027,43643,25073,43348,49006,41995,23566,43255,39629,10047,39832,18045,2229,18998,40189,44001,4530,1470,7640,9863,7349,26538,47931,310,34976,23038,40683,34675,21809,2951,5896,33416,42842,4664,49816,33347,33193,32527,29167,11114,42041,40806,18940,28269,4147,2421,32675,18580,5778,15780,33250,20711,22562,19278,14419,637,21172,6402,44877,20699,12721,11587,39575,1918,1176,11327,17066,4948,42726,301,8690,23061,13233,37263,13793,2655,2929,1255,9408,4415,33132,34326,2659,16075,40444,21680,7687,29275,45214,38331,18746,47225,5354,3637,1943,42158,12538,34997,36429,28811,29241,8266,33547,19897,39706,20705,8635,30824,6722,34770,16744,41412,2243,233,49949,14678,36406,19650,35787,3143,25539,11949,16246,2591,30544,34818,25757,9563,23588,47198,22404,33580,27319,17147,38512,33612,30696,30477,21246,4524,5738,42841,35248,31001,44060,15040,35573,14254,32468,37241,5364,10418,24615,36541,11045,30993,12327,24332,21740,25113,2073,43901,14370,32235,31858,34674,41298,3489,38479,23146,32813,22655,20813,44512,43355,11842,25707,34320,20687,34101,4250,32426,45413,23586,35005,1231,2090,19557,16835,17640,31288,32060,8655,13335,28781,31723,47504,11605,12247,20589,193
*/

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int, int> numFreq;
//         vector<int> reps;

//         for(int i = 0; i < nums.size(); i++){
//             numFreq[nums[i]]++;
//         }

//         for(unordered_map<int, int>::iterator itr = numFreq.begin();  itr != numFreq.end(); itr++){
//             if(itr->second > 1){
//                 reps.push_back(itr->first);
//             }
//         }

//         return reps;
//     }
// };