#include "sincos.h"
const int sintable[] = {
0,
1,3,4,6,7,9,10,12,14,15,17,18,20,21,23,25,
26,28,29,31,32,34,36,37,39,40,42,43,45,46,48,49,
51,53,54,56,57,59,60,62,63,65,66,68,69,71,72,74,
75,77,78,80,81,83,84,86,87,89,90,92,93,95,96,97,
99,100,102,103,105,106,108,109,110,112,113,115,116,117,119,120,
122,123,124,126,127,128,130,131,132,134,135,136,138,139,140,142,
143,144,146,147,148,149,151,152,153,155,156,157,158,159,161,162,
163,164,166,167,168,169,170,171,173,174,175,176,177,178,179,181,
182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,
198,199,200,201,202,203,204,205,206,207,208,209,210,211,211,212,
213,214,215,216,217,217,218,219,220,221,221,222,223,224,225,225,
226,227,227,228,229,230,230,231,232,232,233,234,234,235,235,236,
237,237,238,238,239,239,240,241,241,242,242,243,243,244,244,244,
245,245,246,246,247,247,247,248,248,249,249,249,250,250,250,251,
251,251,251,252,252,252,252,253,253,253,253,254,254,254,254,254,
254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,256,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,254,
254,254,254,254,253,253,253,253,252,252,252,252,251,251,251,251,
250,250,250,249,249,249,248,248,247,247,247,246,246,245,245,244,
244,244,243,243,242,242,241,241,240,239,239,238,238,237,237,236,
235,235,234,234,233,232,232,231,230,230,229,228,227,227,226,225,
225,224,223,222,221,221,220,219,218,217,217,216,215,214,213,212,
211,211,210,209,208,207,206,205,204,203,202,201,200,199,198,197,
196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,
179,178,177,176,175,174,173,171,170,169,168,167,166,164,163,162,
161,159,158,157,156,155,153,152,151,149,148,147,146,144,143,142,
140,139,138,136,135,134,132,131,130,128,127,126,124,123,122,120,
119,117,116,115,113,112,110,109,108,106,105,103,102,100,99,97,
96,95,93,92,90,89,87,86,84,83,81,80,78,77,75,74,
72,71,69,68,66,65,63,62,60,59,57,56,54,53,51,49,
48,46,45,43,42,40,39,37,36,34,32,31,29,28,26,25,
23,21,20,18,17,15,14,12,10,9,7,6,4,3,1,0,
-1,-3,-4,-6,-7,-9,-10,-12,-14,-15,-17,-18,-20,-21,-23,-25,
-26,-28,-29,-31,-32,-34,-36,-37,-39,-40,-42,-43,-45,-46,-48,-49,
-51,-53,-54,-56,-57,-59,-60,-62,-63,-65,-66,-68,-69,-71,-72,-74,
-75,-77,-78,-80,-81,-83,-84,-86,-87,-89,-90,-92,-93,-95,-96,-97,
-99,-100,-102,-103,-105,-106,-108,-109,-110,-112,-113,-115,-116,-117,-119,-120,
-122,-123,-124,-126,-127,-128,-130,-131,-132,-134,-135,-136,-138,-139,-140,-142,
-143,-144,-146,-147,-148,-149,-151,-152,-153,-155,-156,-157,-158,-159,-161,-162,
-163,-164,-166,-167,-168,-169,-170,-171,-173,-174,-175,-176,-177,-178,-179,-181,
-182,-183,-184,-185,-186,-187,-188,-189,-190,-191,-192,-193,-194,-195,-196,-197,
-198,-199,-200,-201,-202,-203,-204,-205,-206,-207,-208,-209,-210,-211,-211,-212,
-213,-214,-215,-216,-217,-217,-218,-219,-220,-221,-221,-222,-223,-224,-225,-225,
-226,-227,-227,-228,-229,-230,-230,-231,-232,-232,-233,-234,-234,-235,-235,-236,
-237,-237,-238,-238,-239,-239,-240,-241,-241,-242,-242,-243,-243,-244,-244,-244,
-245,-245,-246,-246,-247,-247,-247,-248,-248,-249,-249,-249,-250,-250,-250,-251,
-251,-251,-251,-252,-252,-252,-252,-253,-253,-253,-253,-254,-254,-254,-254,-254,
-254,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-256,
-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-255,-254,-254,
-254,-254,-254,-254,-253,-253,-253,-253,-252,-252,-252,-252,-251,-251,-251,-251,
-250,-250,-250,-249,-249,-249,-248,-248,-247,-247,-247,-246,-246,-245,-245,-244,
-244,-244,-243,-243,-242,-242,-241,-241,-240,-239,-239,-238,-238,-237,-237,-236,
-235,-235,-234,-234,-233,-232,-232,-231,-230,-230,-229,-228,-227,-227,-226,-225,
-225,-224,-223,-222,-221,-221,-220,-219,-218,-217,-217,-216,-215,-214,-213,-212,
-211,-211,-210,-209,-208,-207,-206,-205,-204,-203,-202,-201,-200,-199,-198,-197,
-196,-195,-194,-193,-192,-191,-190,-189,-188,-187,-186,-185,-184,-183,-182,-181,
-179,-178,-177,-176,-175,-174,-173,-171,-170,-169,-168,-167,-166,-164,-163,-162,
-161,-159,-158,-157,-156,-155,-153,-152,-151,-149,-148,-147,-146,-144,-143,-142,
-140,-139,-138,-136,-135,-134,-132,-131,-130,-128,-127,-126,-124,-123,-122,-120,
-119,-117,-116,-115,-113,-112,-110,-109,-108,-106,-105,-103,-102,-100,-99,-97,
-96,-95,-93,-92,-90,-89,-87,-86,-84,-83,-81,-80,-78,-77,-75,-74,
-72,-71,-69,-68,-66,-65,-63,-62,-60,-59,-57,-56,-54,-53,-51,-49,
-48,-46,-45,-43,-42,-40,-39,-37,-36,-34,-32,-31,-29,-28,-26,-25,
-23,-21,-20,-18,-17,-15,-14,-12,-10,-9,-7,-6,-4,-3,-1,0,
1,3,4,6,7,9,10,12,14,15,17,18,20,21,23,25,
26,28,29,31,32,34,36,37,39,40,42,43,45,46,48,49,
51,53,54,56,57,59,60,62,63,65,66,68,69,71,72,74,
75,77,78,80,81,83,84,86,87,89,90,92,93,95,96,97,
99,100,102,103,105,106,108,109,110,112,113,115,116,117,119,120,
122,123,124,126,127,128,130,131,132,134,135,136,138,139,140,142,
143,144,146,147,148,149,151,152,153,155,156,157,158,159,161,162,
163,164,166,167,168,169,170,171,173,174,175,176,177,178,179,181,
182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,
198,199,200,201,202,203,204,205,206,207,208,209,210,211,211,212,
213,214,215,216,217,217,218,219,220,221,221,222,223,224,225,225,
226,227,227,228,229,230,230,231,232,232,233,234,234,235,235,236,
237,237,238,238,239,239,240,241,241,242,242,243,243,244,244,244,
245,245,246,246,247,247,247,248,248,249,249,249,250,250,250,251,
251,251,251,252,252,252,252,253,253,253,253,254,254,254,254,254,
254,255,255,255,255,255,255,255,255,255,255,255,255,255,255};
const int atantable[] = {
0,
0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,
3,3,3,3,3,4,4,4,4,4,4,4,5,5,5,5,
5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,8,
8,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10,
10,10,11,11,11,11,11,11,12,12,12,12,12,12,13,13,
13,13,13,13,13,14,14,14,14,14,14,15,15,15,15,15,
15,16,16,16,16,16,16,16,17,17,17,17,17,17,18,18,
18,18,18,18,19,19,19,19,19,19,19,20,20,20,20,20,
20,21,21,21,21,21,21,22,22,22,22,22,22,22,23,23,
23,23,23,23,24,24,24,24,24,24,24,25,25,25,25,25,
25,26,26,26,26,26,26,27,27,27,27,27,27,27,28,28,
28,28,28,28,29,29,29,29,29,29,29,30,30,30,30,30,
30,31,31,31,31,31,31,31,32,32,32,32,32,32,33,33,
33,33,33,33,33,34,34,34,34,34,34,34,35,35,35,35,
35,35,36,36,36,36,36,36,36,37,37,37,37,37,37,38,
38,38,38,38,38,38,39,39,39,39,39,39,39,40,40,40,
40,40,40,41,41,41,41,41,41,41,42,42,42,42,42,42,
42,43,43,43,43,43,43,44,44,44,44,44,44,44,45,45,
45,45,45,45,45,46,46,46,46,46,46,46,47,47,47,47,
47,47,47,48,48,48,48,48,48,48,49,49,49,49,49,49,
50,50,50,50,50,50,50,51,51,51,51,51,51,51,52,52,
52,52,52,52,52,53,53,53,53,53,53,53,54,54,54,54,
54,54,54,55,55,55,55,55,55,55,56,56,56,56,56,56,
56,57,57,57,57,57,57,57,57,58,58,58,58,58,58,58,
59,59,59,59,59,59,59,60,60,60,60,60,60,60,61,61,
61,61,61,61,61,62,62,62,62,62,62,62,62,63,63,63,
63,63,63,63,64,64,64,64,64,64,64,65,65,65,65,65,
65,65,65,66,66,66,66,66,66,66,67,67,67,67,67,67,
67,67,68,68,68,68,68,68,68,69,69,69,69,69,69,69,
69,70,70,70,70,70,70,70,71,71,71,71,71,71,71,71,
72,72,72,72,72,72,72,72,73,73,73,73,73,73,73,74,
74,74,74,74,74,74,74,75,75,75,75,75,75,75,75,76,
76,76,76,76,76,76,76,77,77,77,77,77,77,77,77,78,
78,78,78,78,78,78,78,79,79,79,79,79,79,79,79,80,
80,80,80,80,80,80,80,81,81,81,81,81,81,81,81,82,
82,82,82,82,82,82,82,83,83,83,83,83,83,83,83,84,
84,84,84,84,84,84,84,84,85,85,85,85,85,85,85,85,
86,86,86,86,86,86,86,86,86,87,87,87,87,87,87,87,
87,88,88,88,88,88,88,88,88,88,89,89,89,89,89,89,
89,89,90,90,90,90,90,90,90,90,90,91,91,91,91,91,
91,91,91,91,92,92,92,92,92,92,92,92,93,93,93,93,
93,93,93,93,93,94,94,94,94,94,94,94,94,94,95,95,
95,95,95,95,95,95,95,96,96,96,96,96,96,96,96,96,
97,97,97,97,97,97,97,97,97,98,98,98,98,98,98,98,
98,98,98,99,99,99,99,99,99,99,99,99,100,100,100,100,
100,100,100,100,100,101,101,101,101,101,101,101,101,101,101,102,
102,102,102,102,102,102,102,102,103,103,103,103,103,103,103,103,
103,103,104,104,104,104,104,104,104,104,104,104,105,105,105,105,
105,105,105,105,105,105,106,106,106,106,106,106,106,106,106,106,
107,107,107,107,107,107,107,107,107,107,108,108,108,108,108,108,
108,108,108,108,109,109,109,109,109,109,109,109,109,109,110,110,
110,110,110,110,110,110,110,110,111,111,111,111,111,111,111,111,
111,111,111,112,112,112,112,112,112,112,112,112,112,113,113,113,
113,113,113,113,113,113,113,113,114,114,114,114,114,114,114,114,
114,114,115,115,115,115,115,115,115,115,115,115,115,116,116,116,
116,116,116,116,116,116,116,116,117,117,117,117,117,117,117,117,
117,117,117,118,118,118,118,118,118,118,118,118,118,118,118,119,
119,119,119,119,119,119,119,119,119,119,120,120,120,120,120,120,
120,120,120,120,120,121,121,121,121,121,121,121,121,121,121,121,
121,122,122,122,122,122,122,122,122,122,122,122,122,123,123,123,
123,123,123,123,123,123,123,123,124,124,124,124,124,124,124,124,
124,124,124,124,125,125,125,125,125,125,125,125,125,125,125,125,
125,126,126,126,126,126,126,126,126,126,126,126,126,127,127,127,
127,127,127,127,127,127,127,127,127,128,128,128,128,128,128,128};
