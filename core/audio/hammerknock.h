////////////////////////////////////////////////////////////////////
///	\brief Hammer knock Fourier data
///
/// This file contains the Fourier transformation of a hammer knock
/// over a length of one second. The list contains four sublists:
/// 1. real part left channel
/// 2. imag part left channel
/// 3. real part right channel
/// 4. imag part right channel
/// Apply an FFT to this data to get the waveform according
/// to the chosen sample rate
////////////////////////////////////////////////////////////////////

const std::vector<std::vector<int>>Synthesizer::mHammerKnockFFT=
{{4,4,3,0,-2,-2,-2,0,1,2,0,-2,0,0,-4,-6,-6,-4,-5,-7,-6,
-3,1,5,10,11,9,7,6,7,8,9,8,4,3,3,4,5,4,0,-5,-5,-1,3,
3,2,2,3,4,8,13,19,26,26,13,-4,-13,-13,-9,-5,-3,-1,-2,-4,
-6,-5,-3,-1,-1,-3,-4,-5,-4,-5,-6,-5,-2,1,2,2,2,3,5,6,7,
9,9,6,0,-9,-20,-21,-6,8,10,5,-4,-13,-17,-20,-22,-24,-25,
-23,-18,-4,15,31,37,30,15,5,-2,-14,-25,-30,-27,-22,-21,-22,
-21,-19,-22,-27,-28,-22,-14,-8,-3,3,8,11,19,23,19,14,15,17,
14,7,-3,-12,-12,-3,11,25,31,34,42,52,58,54,46,36,25,16,13,
15,22,26,18,5,-6,-9,-8,-7,-7,-5,-3,-3,-3,1,4,4,1,-6,-14,
-21,-26,-29,-35,-48,-61,-71,-75,-66,-42,-17,-4,-3,-4,-2,1,1,
-2,-5,-4,1,9,12,6,-1,-5,-6,-6,-7,-4,3,11,16,17,13,7,2,2,
5,9,17,27,35,38,35,31,31,35,38,36,30,22,12,6,5,4,-1,-9,
-14,-14,-12,-10,-7,-6,-6,-6,-9,-14,-17,-18,-21,-23,-22,-20,
-20,-24,-26,-27,-29,-27,-17,-1,14,26,33,34,31,21,7,-6,-16,
-25,-31,-32,-27,-16,-7,-5,-8,-9,-6,-5,-8,-14,-17,-17,-14,-8,
1,10,15,17,15,14,14,17,22,24,22,20,20,18,12,7,4,3,0,-6,
-12,-17,-22,-29,-38,-49,-62,-68,-63,-55,-48,-44,-41,-38,-33,
-26,-19,-10,3,15,22,23,21,19,20,22,26,30,33,36,39,42,44,
43,41,38,33,28,24,26,34,40,40,35,30,25,19,16,14,11,7,2,
-4,-10,-13,-13,-12,-12,-13,-12,-11,-9,-8,-6,-4,-4,-8,-12,
-15,-17,-19,-19,-16,-10,-2,4,6,9,12,11,5,-2,-6,-3,2,4,5,
3,-2,-9,-16,-22,-25,-25,-24,-25,-30,-38,-43,-41,-37,-35,-34,
-29,-21,-15,-12,-11,-10,-4,7,19,31,36,36,33,29,26,23,21,17,
13,7,3,-2,-9,-16,-20,-20,-18,-17,-17,-17,-14,-8,-3,0,3,9,
14,18,19,16,12,9,8,10,19,30,39,43,43,38,31,21,11,4,1,1,
0,-1,-1,0,1,3,4,4,4,4,4,1,-3,-7,-8,-8,-10,-13,-14,-14,
-13,-11,-8,-7,-6,-5,-2,1,2,2,1,-2,-4,-5,-5,-3,0,4,6,5,3,
1,-1,-2,-3,-5,-7,-9,-10,-10,-8,-6,-5,-6,-6,-6,-4,-1,2,4,
6,7,7,6,6,6,6,6,5,3,2,1,-2,-8,-12,-16,-21,-24,-25,-25,
-24,-23,-22,-21,-17,-13,-9,-7,-7,-7,-6,-5,-5,-5,-4,-1,2,6,
11,17,22,24,22,18,16,14,11,8,5,3,2,4,8,14,17,18,16,15,
15,17,19,20,19,18,17,18,20,22,24,23,20,17,15,15,18,23,25,
21,12,6,5,7,8,5,1,-1,-1,0,0,-2,-6,-10,-13,-13,-12,-10,-9,
-10,-14,-16,-19,-20,-19,-20,-22,-27,-32,-37,-38,-35,-30,-27,
-25,-25,-24,-23,-20,-14,-10,-7,-5,-2,2,4,5,5,4,3,3,3,3,3,
0,-2,-2,1,5,8,7,4,3,3,3,1,-2,-4,-5,-4,-3,-1,2,5,7,8,7,
5,2,-1,-5,-8,-11,-14,-18,-21,-22,-22,-20,-20,-21,-24,-27,
-29,-28,-24,-20,-17,-15,-13,-12,-13,-14,-13,-11,-10,-9,-8,-6,
-4,-2,-1,0,1,4,8,12,13,11,7,4,3,3,3,3,4,3,3,2,1,1,2,
3,4,3,3,1,-1,-4,-4,-4,-4,-4,-3,-1,2,7,12,17,22,26,29,33,
38,43,44,39,33,29,25,20,15,11,10,11,13,14,14,16,18,20,23,
23,20,15,11,7,6,7,10,13,13,12,11,13,14,15,14,12,9,4,0,
-4,-6,-5,-2,1,2,1,0,-2,-3,-4,-4,-5,-7,-9,-7,-2,1,1,2,4,
6,6,6,5,3,2,3,4,5,5,6,7,6,3,1,2,5,6,6,3,-2,-7,-10,
-12,-13,-14,-15,-15,-12,-9,-9,-11,-16,-18,-16,-13,-11,-10,
-12,-12,-12,-10,-9,-8,-7,-7,-9,-10,-10,-8,-4,-1,3,5,5,3,1,
1,1,0,2,6,11,15,19,22,25,27,30,32,32,29,28,29,30,27,21,
16,13,11,9,8,7,6,2,-5,-12,-15,-15,-14,-14,-13,-11,-10,-9,
-8,-7,-5,-5,-8,-13,-17,-24,-32,-38,-40,-41,-42,-42,-42,-43,
-45,-45,-39,-29,-22,-18,-16,-14,-10,-6,-2,-2,-4,-7,-8,-7,-5,
-1,5,8,7,5,5,5,6,10,12,10,6,2,3,7,7,1,-7,-14,-18,-19,
-17,-15,-18,-26,-30,-28,-25,-26,-28,-28,-27,-25,-21,-16,-16,
-19,-18,-15,-15,-19,-21,-21,-23,-27,-31,-32,-29,-28,-31,-36,
-37,-33,-28,-22,-18,-19,-19,-11,2,14,21,23,20,17,17,21,26,
30,34,38,43,47,53,60,66,64,59,57,57,49,38,36,40,45,47,42,
35,29,26,26,28,33,39,44,50,53,51,46,41,37,32,30,33,39,44,
47,50,49,47,46,46,44,40,33,25,16,8,2,-3,-10,-18,-23,-26,
-26,-25,-25,-28,-35,-44,-51,-54,-56,-58,-59,-57,-53,-49,-48,
-48,-47,-43,-38,-34,-32,-30,-29,-27,-25,-21,-16,-10,-5,-2,0,
2,2,0,-4,-6,-7,-8,-9,-10,-8,-2,6,13,16,16,16,16,15,11,8,
6,7,9,8,7,5,4,3,2,1,0,-3,-5,-4,-2,-2,-3,-3,-3,-1,2,3,
0,-3,-5,-7,-9,-11,-14,-15,-14,-13,-9,-5,-2,-1,-1,-4,-8,-12,
-14,-14,-10,-6,-2,-1,-1,-1,-1,0,1,2,1,-1,-2,-3,-5,-6,-6,
-7,-7,-9,-10,-11,-11,-11,-10,-9,-7,-6,-4,-1,1,2,3,5,8,11,
13,14,14,11,8,4,2,1,1,2,3,5,6,7,6,3,0,-1,0,1,0,-3,-8,
-12,-14,-15,-13,-10,-8,-8,-9,-10,-11,-9,-6,-4,-3,-1,0,0,0,
0,-1,0,1,4,6,8,9,11,12,13,12,10,6,4,2,0,-1,-2,-2,-1,-1,
0,0,-3,-5,-6,-5,-4,-4,-5,-6,-7,-7,-5,-4,-4,-5,-6,-5,-5,
-7,-8,-7,-5,-2,1,7,11,13,11,9,8,7,8,9,10,10,9,10,11,11,
10,9,8,9,10,10,8,9,10,10,8,7,9,9,7,4,2,0,-2,-4,-6,-8,
-9,-12,-13,-13,-11,-8,-5,-3,-2,-3,-5,-6,-4,0,3,4,4,4,2,1,
2,4,7,8,7,6,4,3,1,0,0,2,6,9,13,17,20,22,22,22,22,21,
16,13,10,9,9,10,10,10,8,6,5,5,6,5,4,3,4,4,3,1,0,-1,-3,
-4,-6,-8,-11,-14,-17,-18,-17,-14,-11,-7,-2,3,6,7,4,1,1,3,
6,8,8,9,10,12,13,12,11,11,11,10,10,9,9,8,7,6,5,2,-3,-8,
-12,-12,-12,-11,-12,-13,-12,-11,-9,-8,-7,-7,-7,-7,-8,-8,-7,
-6,-7,-10,-11,-11,-10,-8,-6,-4,-4,-5,-8,-10,-9,-8,-8,-8,-9,
-9,-10,-12,-13,-13,-12,-10,-8,-7,-8,-11,-14,-14,-11,-6,-3,0,
2,4,5,2,0,-2,-3,-4,-4,-3,-2,-4,-6,-8,-10,-11,-12,-13,-13,
-11,-10,-9,-10,-9,-6,-3,-1,-1,-1,-3,-7,-8,-8,-6,-4,-2,-1,
-1,-1,-1,0,1,1,1,1,0,1,1,0,0,0,0,1,2,4,3,1,-2,-4,-4,
-2,2,6,8,10,10,9,8,7,6,5,5,6,7,8,8,7,7,6,6,8,11,11,
11,10,9,7,5,3,0,-2,-4,-4,-3,-2,-1,-2,-5,-7,-7,-5,-4,-3,
-2,-1,0,0,-1,0,0,-1,-2,-3,-3,-3,-4,-5,-6,-6,-5,-4,-4,-3,
-1,0,2,2,1,0,0,1,3,4,5,9,14,18,19,20,19,19,17,13,9,6,
3,2,0,-2,-4,-4,-4,-4,-4,-5,-5,-6,-6,-6,-5,-3,-1,-1,-1,1,
0,-2,-4,-5,-5,-6,-6,-4,-2,-2,-3,-5,-5,-4,-2,0,1,3,3,4,6,
9,11,12,11,9,9,10,12,14,16,17,18,20,24,26,26,24,24,24,22,
19,16,12,8,6,7,7,6,4,2,-1,-3,-5,-8,-10,-11,-12,-15,-14,
-11,-7,-5,-4,-3,-3,-3,-5,-6,-6,-6,-3,0,3,2,0,-2,-2,-2,-1,
0,1,3,3,2,2,2,3,4,3,3,4,4,3,1,0,0,0,0,0,2,3,2,2,1,
0,-1,-1,-1,-2,-4,-5,-5,-4,-5,-5,-4,-4,-4,-3,-3,-3,-4,-4,
-4,-4,-4,-4,-3,-2,-2,-2,-1,0,1,0,0,-1,-3,-4,-3,-2,-2,-2,
-3,-3,-3,-2,0,1,1,1,1,0,-1,-1,0,1,2,4,5,6,6,6,6,6,6,
7,8,8,8,7,5,2,-1,-3,-6,-9,-11,-12,-13,-15,-17,-19,-21,-22,
-23,-23,-24,-26,-27,-25,-21,-18,-14,-10,-5,-1,2,2,2,3,5,7,
9,10,11,12,12,12,13,13,12,10,10,12,13,14,15,15,15,14,13,
12,12,11,9,9,9,9,9,8,6,4,1,-1,-2,-3,-2,-3,-3,-5,-6,-7,
-7,-7,-7,-7,-7,-7,-7,-8,-8,-8,-8,-9,-9,-10,-9,-8,-7,-8,
-10,-11,-11,-12,-12,-12,-11,-9,-7,-6,-6,-7,-7,-7,-7,-7,-7,
-8,-8,-8,-7,-6,-6,-6,-6,-6,-6,-7,-8,-10,-11,-11,-11,-10,
-10,-10,-9,-7,-6,-6,-6,-6,-5,-5,-4,-3,-1,0,1,2,1,0,-1,-3,
-3,-2,-1,1,1,0,-1,0,2,4,6,7,9,9,8,7,6,5,6,7,7,6,6,5,
5,4,3,2,3,3,3,2,4,7,10,11,10,7,6,5,6,6,5,5,6,6,5,5,
5,5,6,8,7,6,3,1,1,0,0,-1,-2,-1,0,1,2,3,3,3,1,0,-1,-2,
-3,-5,-6,-7,-7,-7,-9,-11,-14,-16,-16,-16,-15,-14,-11,-9,-6,
-3,-2,-1,-1,-1,-1,0,3,4,4,3,1,0,0,-1,-1,-3,-4,-5,-5,-3,
-2,-1,-1,-3,-3,-4,-4,-4,-4,-3,-2,-1,-2,-2,-3,-4,-6,-7,-7,
-7,-6,-5,-5,-5,-4,-4,-4,-6,-7,-7,-7,-6,-6,-4,-2,0,1,2,5,
8,11,13,15,18,19,20,20,19,18,18,18,18,17,15,13,11,11,11,
11,11,11,11,11,10,8,7,6,6,5,6,7,9,10,12,13,13,13,13,13,
12,11,10,9,8,8,9,10,12,13,11,11,11,11,11,12,12,11,10,8,
7,6,7,9,10,11,12,13,14,14,14,14,14,13,13,12,12,11,10,9,
8,7,6,4,3,4,4,4,4,4,4,4,4,3,1,-1,-2,-3,-3,-4,-5,-6,-6,
-7,-6,-5,-5,-6,-8,-8,-8,-7,-7,-6,-6,-8,-9,-10,-9,-8,-7,-7,
-7,-7,-8,-8,-7,-7,-7,-7,-7,-8,-8,-8,-8,-8,-8,-7,-6,-7,-8,
-8,-7,-6,-5,-5,-6,-8,-9,-9,-9,-8,-8,-8,-7,-8,-7,-6,-5,-5,
-5,-5,-4,-4,-5,-5,-6,-5,-5,-5,-5,-5,-6,-6,-7,-7,-7,-7,-7,
-7,-7,-8,-8,-7,-6,-4,-3,-2,-2,-2,-2,-3,-4,-4,-4,-4,-4,-4,
-4,-3,-2,1,3,3,3,2,2,1,-1,-3,-4,-3,-2,-2,-1,2,5,7,7,6,
5,3,-1,-4,-7,-8,-8,-9,-9,-10,-11,-11,-12,-11,-11,-10,-9,-9,
-8,-7,-7,-6,-5,-4,-4,-4,-4,-4,-4,-3,-2,-2,-1,-2,-2,-2,-2,
-1,-1,0,0,0,0,0,1,2,1,0,-1,0,1,2,2,0,-2,-4,-3,-2,-1,
-1,0,0,0,1,1,2,2,3,4,5,5,5,5,5,4,3,2,2,2,1,-1,-2,-3,
-4,-4,-4,-4,-4,-4,-5,-5,-4,-4,-4,-4,-4,-5,-4,-4,-3,-3,-4,
-4,-4,-4,-4,-3,-3,-2,-1,0,0,1,1,1,1,1,2,3,4,4,5,5,5,6,
6,6,6,6,6,6,7,7,7,7,7,7,7,6,7,7,7,7,8,9,10,10,10,9,
9,8,7,7,6,7,7,8,8,7,7,6,6,6,6,6,7,7,6,6,6,6,6,5,4,
3,3,3,3,3,4,5,6,7,6,5,3,2,1,0,-1,-2,-2,-3,-4,-6,-7,-7,
-7,-7,-7,-8,-9,-9,-9,-8,-7,-6,-7,-7,-7,-7,-6,-6,-6,-5,-5,
-4,-3,-2,-2,-2,-2,-2,-1,0,1,0,-1,-2,-2,-3,-3,-3,-2,-1,-1,
-2,-3,-4,-5,-5,-5,-4,-3,-3,-4,-5,-6,-5,-3,-2,-1,-1,-1,-2,
-2,-1,1,2,2,1,1,1,1,1,2,3,3,4,4,4,4,5,6,7,8,8,9,8,7,
6,5,5,5,5,6,7,8,9,10,10,11,11,12,12,11,11,10,9,7,6,5,
5,5,4,4,4,4,3,3,3,3,3,4,4,4,3,2,1,0,0,0,0,0,-1,-1,
-1,-2,-3,-4,-5,-5,-5,-5,-4,-3,-3,-4,-4,-3,-2,-2,-3,-4,-3,
-3,-4,-4,-4,-4,-4,-4,-4,-4,-4,-3,-3,-2,-2,-2,-2,-2,-3,-3,
-3,-2,-1,-1,-2,-2,-1,0,1,2,3,2,1,0,-1,-1,-1,-1,-3,-4,-4,
-4,-4,-5,-5,-5,-5,-5,-6,-7,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,
-6,-6,-6,-5,-5,-6,-7,-8,-8,-8,-7,-5,-4,-3,-3,-3,-4,-4,-3,
-3,-2,-1,-2,-2,-2,-2,-2,-2,-3,-4,-4,-4,-4,-3,-3,-4,-5,-6,
-6,-6,-6,-7,-6,-5,-3,-2,-1,-1,-1,-1,-2,-2,-3,-3,-4,-3,-2,
0,0,1,2,3,4,4,4,3,3,3,2,3,3,4,4,4,5,6,7,7,7,7,6,6,
6,5,5,4,4,4,4,5,4,4,3,3,4,5,6,6,6,5,4,4,5,6,7,7,7,
7,8,8,8,6,5,4,3,2,1,1,0,0,-1,-3,-5,-5,-4,-3,-3,-2,-1,
1,2,1,1,0,1,3,5,6,7,7,6,5,5,5,4,4,4,4,4,5,5,5,5,5,
4,4,3,1,0,0,-1,-1,-2,-2,-3,-3,-2,-2,-1,0,0,0,-1,-2,-2,
-1,-1,-1,-2,-3,-3,-3,-2,0,1,1,1,2,2,2,3,4,4,4,4,4,5,5,
6,6,6,6,6,6,5,5,5,6,6,5,3,2,1,1,2,2,3,4,4,4,3,3,2,
2,2,1,0,-1,-1,0,0,0,0,-1,-2,-2,-2,-3,-2,-3,-3,-4,-4,-4,
-4,-4,-4,-4,-3,-2,-2,-1,-1,-2,-3,-3,-3,-3,-4,-4,-5,-5,-4,
-4,-4,-4,-4},{0,2,4,5,3,1,-1,-1,-1,1,3,2,1,3,4,1,-2,-3,
-2,-4,-9,-12,-12,-12,-9,-4,-1,-1,-1,-2,-1,1,5,5,3,2,2,3,
6,8,5,-1,-4,-3,-1,-2,-3,-4,-6,-7,-7,-4,4,19,31,29,19,9,
4,2,3,4,6,7,4,2,0,2,4,4,3,2,2,2,-1,-3,-5,-4,-3,-1,-1,
-1,0,1,3,6,10,16,19,20,13,-4,-13,-6,6,16,19,17,12,8,4,
-1,-9,-17,-27,-36,-34,-21,-1,18,27,27,29,29,22,10,1,-2,-2,
-4,-7,-7,-7,-11,-21,-29,-33,-33,-33,-33,-30,-30,-27,-18,-10,
-9,-10,-6,0,4,2,-7,-22,-34,-39,-35,-28,-25,-23,-16,0,15,26,
32,34,30,24,18,19,29,41,43,37,28,23,21,18,16,16,17,15,16,
20,26,32,36,38,37,34,33,35,34,24,9,-14,-39,-55,-52,-39,-28,
-26,-24,-21,-16,-14,-16,-19,-22,-20,-10,-3,-2,-6,-10,-12,-16,
-22,-26,-24,-18,-11,-5,-5,-9,-14,-19,-24,-26,-24,-17,-7,1,4,
4,6,13,23,30,35,36,32,29,30,33,31,24,18,14,12,12,14,15,
17,19,19,16,14,12,8,4,3,4,2,-3,-7,-14,-25,-36,-40,-36,-26,
-13,2,16,28,34,33,29,22,12,0,-11,-16,-13,-6,-4,-6,-7,-4,
-1,-2,-7,-14,-21,-26,-28,-25,-19,-13,-8,-7,-7,-8,-4,3,8,11,
15,21,25,25,25,27,31,34,34,33,34,34,34,30,19,2,-15,-25,
-29,-33,-37,-42,-48,-54,-58,-62,-63,-58,-48,-39,-34,-32,-33,
-34,-33,-31,-28,-25,-22,-17,-11,-4,2,6,9,10,6,1,0,7,17,24,
28,31,31,31,31,33,34,35,35,31,25,20,17,15,13,10,8,7,7,6,
8,12,14,13,11,8,4,-3,-9,-13,-13,-10,-6,-3,2,10,15,14,9,5,
5,9,14,19,24,26,25,21,16,12,10,11,13,9,-1,-10,-16,-20,-26,
-32,-35,-35,-33,-34,-38,-44,-47,-45,-37,-25,-14,-6,0,3,7,10,
14,17,18,18,19,19,15,7,0,-5,-7,-10,-15,-20,-24,-25,-24,-25,
-26,-23,-18,-12,-8,-7,-9,-13,-20,-24,-22,-14,-3,9,18,26,30,
30,26,20,17,15,13,11,9,8,8,9,10,11,12,15,17,18,16,13,12,
12,11,7,3,0,-3,-3,-3,-4,-5,-5,-4,-2,1,3,4,3,1,-2,-4,-5,
-4,0,4,6,7,7,7,7,7,6,5,2,-1,-3,-3,-3,-3,-4,-6,-9,-9,-8,
-7,-5,-2,0,1,2,4,5,7,9,11,12,14,17,18,17,16,13,8,3,-1,
-5,-8,-11,-14,-18,-20,-19,-17,-16,-17,-17,-17,-18,-19,-22,
-24,-26,-26,-27,-25,-20,-12,-6,-3,-2,0,1,1,-1,-3,-7,-12,
-15,-14,-10,-6,-4,-4,-5,-5,-4,-1,1,2,1,1,1,3,6,11,13,13,
12,10,9,12,19,27,30,27,22,21,24,26,26,24,22,23,24,26,27,
26,23,19,17,17,19,22,22,21,20,17,16,17,18,18,16,10,2,-5,
-9,-10,-10,-12,-14,-17,-21,-23,-22,-20,-20,-20,-18,-15,-12,
-9,-7,-6,-6,-5,-4,-2,-1,-2,-6,-8,-7,-4,0,2,2,2,4,6,6,4,
2,-1,-2,-3,-3,-2,1,5,9,12,15,16,17,17,16,16,14,11,7,4,2,
2,3,2,0,-6,-12,-16,-17,-17,-17,-16,-15,-15,-16,-18,-19,-20,
-20,-22,-23,-23,-22,-21,-21,-22,-23,-23,-19,-13,-9,-6,-7,-8,
-9,-10,-10,-9,-9,-9,-9,-9,-10,-11,-11,-10,-9,-8,-7,-8,-10,
-13,-15,-17,-19,-22,-26,-29,-32,-33,-32,-30,-28,-26,-23,-20,
-13,-3,5,10,11,13,14,14,10,6,3,2,2,1,1,1,2,5,10,14,16,
16,13,10,7,5,7,9,10,9,9,10,13,16,19,22,23,21,18,14,10,7,
7,9,11,12,12,11,10,9,9,8,4,-1,-3,-1,0,0,0,2,4,6,7,7,6,
4,5,6,6,6,9,12,12,10,8,9,12,16,20,22,21,18,16,14,12,9,
6,4,4,7,9,8,3,-2,-3,-3,-1,-1,-3,-5,-6,-7,-6,-6,-5,-6,-8,
-11,-14,-16,-16,-15,-12,-9,-7,-8,-9,-10,-13,-16,-19,-19,-18,
-16,-14,-11,-8,-5,0,6,10,11,14,19,25,29,29,29,28,28,28,29,
32,36,37,34,28,23,21,19,17,15,15,16,16,16,19,24,28,30,32,
34,31,25,19,15,10,6,2,-2,-7,-15,-24,-28,-27,-24,-23,-24,
-24,-22,-19,-14,-11,-11,-14,-16,-18,-19,-18,-12,-8,-7,-7,-6,
-7,-5,0,5,8,7,5,8,15,21,22,20,16,11,7,10,14,12,5,-1,-2,
-2,-4,-8,-11,-14,-17,-15,-11,-11,-13,-12,-9,-8,-9,-10,-9,-9,
-13,-19,-23,-22,-22,-27,-36,-43,-48,-51,-51,-52,-59,-69,-72,
-67,-59,-51,-46,-46,-49,-52,-53,-52,-50,-49,-47,-45,-43,-38,
-27,-15,-9,-7,0,8,6,-1,-5,-2,4,11,13,10,6,1,-3,-6,-7,-4,
0,8,17,21,24,25,24,19,14,13,16,20,27,33,38,42,47,54,61,
68,72,74,73,71,71,70,67,62,56,52,50,51,53,55,52,45,37,31,
25,17,9,4,1,-1,-4,-9,-14,-17,-17,-17,-18,-20,-22,-24,-27,
-28,-28,-26,-22,-19,-16,-12,-8,-7,-8,-9,-10,-12,-16,-21,-25,
-26,-21,-15,-10,-7,-4,1,4,4,2,1,2,5,6,7,7,7,8,8,9,8,6,
3,4,4,4,3,2,0,2,6,10,10,10,10,9,8,6,2,-1,-5,-7,-7,-5,
-2,2,5,5,3,-1,-6,-10,-11,-9,-7,-5,-4,-4,-5,-4,-2,1,2,2,
3,3,2,1,1,1,0,-1,-3,-5,-7,-9,-11,-12,-13,-14,-14,-13,-13,
-13,-14,-13,-11,-8,-5,-1,3,5,5,4,2,1,-1,-1,-1,1,3,7,8,8,
6,5,6,9,12,12,9,5,1,-3,-5,-5,-3,-3,-5,-7,-10,-12,-11,-11,
-11,-10,-9,-8,-8,-9,-10,-12,-12,-11,-10,-8,-7,-4,-1,3,6,7,
7,6,6,5,3,2,1,1,2,3,4,3,1,-1,-1,0,0,-1,-2,-4,-6,-5,-4,
-4,-5,-7,-7,-7,-10,-13,-15,-17,-19,-19,-15,-11,-7,-6,-5,-6,
-7,-6,-5,-4,-4,-4,-3,-1,0,1,0,-1,1,2,2,2,3,5,6,5,6,8,
11,13,12,12,12,11,10,9,8,6,2,-2,-5,-7,-8,-7,-5,-4,-4,-7,
-11,-12,-10,-8,-6,-5,-5,-6,-8,-9,-8,-5,-3,-2,-2,-2,-3,-6,
-9,-12,-14,-14,-14,-12,-9,-5,-2,1,5,9,12,12,11,9,8,8,10,
11,12,12,11,10,11,12,12,11,11,12,14,14,14,14,14,14,15,14,
13,11,8,2,-3,-7,-10,-12,-13,-11,-7,-3,0,-1,-4,-6,-5,-3,-2,
-2,-2,0,3,5,7,7,9,10,11,12,13,15,16,17,20,23,24,23,19,
15,12,12,11,8,6,4,4,3,4,5,5,5,5,5,4,5,6,6,4,2,0,-1,
-1,1,3,6,6,4,2,2,2,3,2,2,3,3,1,-2,-4,-5,-4,-3,-1,0,-3,
-8,-12,-13,-12,-10,-9,-6,-2,1,2,2,2,1,0,0,2,4,4,4,2,1,
0,-3,-5,-7,-7,-7,-8,-11,-12,-11,-9,-7,-5,-3,-3,-6,-9,-11,
-12,-11,-10,-9,-9,-9,-9,-8,-7,-7,-6,-7,-6,-6,-6,-6,-7,-7,
-8,-8,-6,-4,-3,-3,-6,-9,-13,-14,-13,-12,-9,-6,-4,-3,-3,-3,
-3,-5,-5,-4,-3,-2,-1,-1,-1,-3,-3,-2,1,3,5,7,8,10,10,10,
9,7,5,3,2,3,5,5,2,-1,-2,-2,-3,-4,-3,-2,-2,-1,-1,-1,0,0,
0,0,-1,-1,-1,-3,-5,-6,-7,-7,-9,-9,-9,-8,-7,-7,-7,-9,-10,
-11,-12,-13,-15,-14,-10,-6,-2,2,5,9,12,13,13,12,11,11,10,
8,6,5,5,4,3,3,2,0,-2,-3,-4,-4,-3,-3,-2,1,2,1,-1,-1,-3,
-5,-7,-7,-5,-5,-6,-8,-11,-12,-13,-13,-12,-12,-13,-14,-14,
-12,-9,-7,-7,-8,-10,-11,-10,-9,-8,-7,-7,-6,-1,4,7,8,12,15,
18,20,21,20,17,16,17,18,19,20,20,19,19,18,15,13,12,8,3,0,
-1,0,0,0,2,3,3,2,0,-2,-4,-4,-2,2,3,2,1,-1,-2,-2,-2,-1,
0,1,1,1,1,1,2,2,3,4,6,6,5,4,4,3,2,2,4,5,6,6,7,6,6,
7,7,7,6,5,4,4,3,2,2,2,2,2,2,2,2,1,1,0,-1,-1,-1,-1,-1,
-2,-1,0,1,2,3,2,1,0,-1,0,0,0,-1,-2,-3,-3,-2,-1,0,0,1,
0,-2,-3,-3,-3,-2,-1,0,1,2,3,3,4,4,6,8,10,13,15,17,18,
18,18,17,15,14,13,12,11,10,8,5,3,1,-1,-4,-9,-15,-19,-21,
-23,-25,-25,-23,-20,-18,-18,-18,-18,-17,-15,-14,-12,-10,-9,
-8,-7,-5,-3,-3,-4,-4,-4,-2,-1,1,3,5,6,7,8,9,9,9,9,11,
12,13,15,16,16,15,14,12,12,12,12,12,11,10,9,9,8,7,7,7,7,
7,6,6,6,5,5,4,3,3,4,4,4,4,3,1,0,-1,-3,-4,-4,-3,-2,-1,
-1,-2,-1,-1,-1,-1,-2,-3,-3,-3,-3,-2,-2,-2,-1,-1,0,-1,-2,
-4,-6,-6,-7,-8,-9,-10,-10,-9,-9,-10,-10,-10,-11,-12,-12,-11,
-10,-8,-7,-6,-6,-7,-8,-10,-10,-10,-9,-9,-10,-12,-12,-12,-12,
-11,-9,-7,-5,-4,-4,-5,-5,-4,-3,-2,-2,-2,-1,-1,-1,-2,-3,-3,
-4,-5,-7,-8,-6,-2,1,2,1,1,0,1,1,1,1,2,2,2,2,2,2,3,6,
8,8,7,6,6,6,5,4,2,2,3,3,3,5,7,8,8,8,9,9,9,8,7,7,7,
8,8,6,3,-1,-4,-6,-8,-10,-12,-12,-11,-10,-8,-7,-7,-8,-8,-8,
-5,-3,0,0,-1,-1,0,0,0,0,-2,-4,-5,-5,-3,-2,-2,-2,-3,-3,
-4,-5,-6,-5,-5,-4,-3,-2,-2,-3,-4,-5,-7,-7,-8,-8,-9,-9,-9,
-8,-8,-10,-12,-14,-15,-17,-19,-20,-20,-20,-22,-23,-23,-22,
-20,-19,-17,-15,-12,-9,-7,-6,-5,-4,-2,0,1,2,1,-1,-1,0,0,
0,0,1,2,3,2,1,0,-2,-3,-4,-5,-5,-4,-2,-1,0,1,2,3,3,3,3,
3,1,0,-1,0,2,4,3,3,3,4,4,5,6,7,7,6,5,3,2,2,3,3,4,5,
6,8,9,10,11,11,12,14,14,15,15,15,16,16,16,15,13,13,14,14,
14,14,15,16,17,18,18,17,16,16,16,15,15,14,13,11,11,12,13,
12,11,9,9,8,9,10,10,9,8,6,6,6,6,6,6,6,5,5,5,5,5,5,5,
5,4,4,3,3,2,3,3,3,2,1,1,2,4,4,4,3,2,1,1,0,0,0,0,-1,
-2,-1,-1,-1,-1,0,0,1,1,0,0,0,0,1,1,1,1,1,0,0,-1,-1,-1,
-1,-2,-4,-5,-6,-6,-5,-4,-3,-2,-2,-1,-2,-3,-3,-3,-4,-4,-5,
-6,-7,-7,-5,-3,-2,-1,0,2,3,2,0,-2,-3,-4,-5,-5,-4,-1,2,5,
7,10,12,11,9,7,6,5,4,4,3,2,0,-2,-3,-4,-5,-5,-5,-6,-6,
-6,-7,-6,-6,-5,-6,-6,-7,-7,-7,-6,-6,-5,-5,-5,-6,-6,-6,-6,
-5,-5,-5,-5,-5,-4,-3,-2,-3,-4,-4,-3,-1,0,0,-2,-4,-5,-5,
-5,-5,-5,-5,-5,-5,-5,-5,-5,-5,-4,-3,-2,-1,0,2,2,2,2,3,3,
4,3,3,2,1,0,0,0,0,-1,-2,-3,-3,-3,-3,-3,-3,-4,-5,-5,-4,
-4,-5,-6,-7,-7,-8,-8,-9,-9,-9,-8,-8,-8,-8,-9,-9,-9,-9,-9,
-8,-8,-8,-7,-7,-7,-6,-6,-5,-5,-5,-5,-5,-4,-4,-4,-3,-3,-3,
-3,-3,-3,-4,-4,-3,-2,-1,0,1,2,2,2,2,1,1,1,2,2,3,3,3,4,
3,3,3,3,4,5,5,5,5,6,6,7,6,6,5,4,4,4,4,5,7,9,10,11,
11,11,11,11,11,10,10,11,10,9,7,6,6,6,6,5,3,1,1,1,1,1,
1,0,-1,-2,-2,-2,-3,-3,-4,-4,-3,-3,-2,-3,-3,-3,-3,-1,0,1,
1,0,0,-1,-2,-2,-1,0,1,1,1,0,-1,-2,-3,-3,-3,-2,-3,-5,-6,
-7,-7,-6,-6,-5,-5,-6,-7,-7,-6,-5,-5,-5,-6,-6,-7,-7,-7,-7,
-6,-6,-6,-7,-7,-7,-6,-5,-4,-3,-1,0,0,-1,-2,-2,-3,-4,-4,
-4,-3,-3,-2,-1,0,1,3,4,5,7,8,8,8,7,7,6,6,6,6,6,6,6,6,
6,6,6,7,8,9,9,8,8,7,7,7,8,8,8,8,8,8,8,7,6,4,3,3,3,
4,4,3,2,3,4,4,3,3,3,3,3,2,2,2,2,1,1,0,0,0,0,0,1,1,
2,1,0,0,0,0,1,1,0,-1,-1,-1,0,2,4,5,5,5,4,5,6,6,5,5,
4,5,5,4,4,4,4,4,4,3,2,1,0,0,-1,-1,0,0,0,-1,-1,-1,-1,
-1,0,0,-1,-3,-4,-5,-6,-6,-5,-4,-4,-4,-4,-4,-5,-4,-3,-3,
-2,-3,-2,-2,-1,-1,-1,-2,-3,-3,-3,-2,-2,-2,-2,-3,-4,-5,-6,
-7,-8,-9,-8,-8,-7,-6,-5,-5,-5,-6,-6,-8,-9,-10,-10,-10,-10,
-10,-9,-8,-7,-6,-6,-6,-6,-6,-7,-7,-6,-7,-7,-7,-7,-6,-4,-3,
-2,-2,-2,-2,-1,-1,-1,-2,-2,-2,-2,-1,-1,-2,-3,-3,-3,-2,-1,
0,0,-1,-1,-2,-2,-2,-1,0,1,1,3,4,5,6,6,6,6,6,5,5,5,5,
5,3,1,-1,-1,-2,-3,-4,-4,-3,-2,-2,-3,-5,-5,-5,-3,-2,0,1,
1,1,1,1,1,1,1,2,2,2,3,3,4,5,6,6,6,6,5,5,5,5,4,3,2,
1,0,0,1,1,2,2,1,0,0,0,1,1,0,-1,-2,-3,-4,-4,-3,-3,-3,
-3,-3,-3,-3,-2,-2,-2,-1,-1,-1,-1,0,1,2,2,3,3,3,3,4,5,6,
7,6,5,4,3,3,3,3,4,5,6,6,6,6,7,7,7,7,6,5,5,6,7,7,7,
6,6,6,5,6,6,5,5,4,4,4,3,2,2,2,2,3,4,4,4,4,4,4,4,4,
3,3,2,2,2,3,3},{2,2,1,-1,0,1,-1,-3,-1,3,3,2,3,2,-3,-6,
-5,-1,0,-3,-4,-1,2,6,13,14,11,9,9,9,9,9,7,1,-3,-4,-2,1,
2,-4,-12,-13,-12,-10,-10,-8,-5,-3,-3,-4,-1,5,14,17,10,4,6,
10,8,4,2,3,4,4,5,7,9,9,4,-3,-8,-10,-11,-11,-9,-6,-3,-1,
-1,0,2,3,4,3,1,2,1,-4,-9,-16,-25,-23,-4,14,19,11,-3,-15,
-21,-24,-25,-26,-23,-14,-1,19,43,58,57,43,27,21,17,7,-2,-8,
-16,-30,-43,-43,-34,-26,-24,-25,-25,-16,-3,7,12,13,7,2,5,
14,15,4,-9,-15,-16,-12,-3,12,34,55,64,53,37,28,21,12,11,
22,32,23,2,-23,-33,-19,8,30,37,34,27,20,10,-2,-12,-14,-13,
-14,-14,-13,-12,-12,-13,-14,-16,-17,-18,-19,-23,-31,-41,-52,
-61,-62,-43,-7,21,25,20,16,12,10,9,9,9,10,9,4,-2,-5,-5,
-3,-3,-6,-6,-2,6,10,9,7,7,10,15,22,28,31,32,32,31,29,27,
24,18,12,7,6,9,12,11,10,8,3,-3,-9,-15,-19,-21,-21,-22,-27,
-34,-38,-37,-34,-32,-28,-23,-18,-14,-11,-9,-9,-10,-9,-1,13,
28,38,43,41,34,23,11,-3,-15,-24,-30,-34,-34,-26,-11,3,5,0,
-3,-1,-1,-5,-12,-16,-15,-11,-5,4,14,21,24,22,20,21,23,27,
29,27,25,23,20,16,14,14,15,15,15,15,10,-2,-19,-36,-53,-71,
-83,-85,-80,-71,-63,-56,-47,-37,-25,-15,-7,2,12,21,26,25,20,
13,9,8,9,10,14,21,28,35,38,39,41,44,43,40,40,43,42,35,26,
15,6,4,6,8,9,9,7,1,-8,-15,-19,-20,-21,-23,-24,-22,-20,-19,
-18,-17,-18,-20,-21,-18,-14,-11,-8,-1,10,22,31,34,36,38,39,
34,22,10,2,1,6,11,12,7,1,-7,-14,-20,-22,-20,-21,-33,-52,
-71,-82,-86,-85,-82,-78,-75,-70,-64,-59,-53,-39,-19,1,16,23,
25,26,25,20,15,10,9,9,10,9,7,5,8,15,22,27,30,33,35,34,
29,24,21,20,21,23,25,25,26,28,31,35,40,45,49,52,53,50,42,
30,18,8,1,-4,-7,-9,-10,-10,-9,-8,-8,-10,-12,-15,-18,-23,
-28,-30,-31,-30,-30,-31,-31,-29,-24,-18,-10,-5,-5,-8,-9,-7,
-4,-2,-2,-2,-2,0,2,5,8,12,14,12,8,4,1,-1,-4,-7,-10,-13,
-15,-16,-16,-11,-6,-1,2,6,8,8,9,9,9,8,9,10,13,16,17,17,
15,12,7,2,0,0,-2,-7,-15,-21,-24,-26,-27,-29,-30,-29,-28,
-24,-19,-15,-13,-13,-13,-13,-13,-12,-10,-9,-9,-6,-1,7,15,23,
26,24,21,19,17,13,9,5,3,3,4,5,7,8,7,6,4,3,3,3,2,1,0,
2,5,9,14,18,17,16,19,24,30,37,43,45,39,30,21,17,16,12,5,
-2,-4,-4,-4,-4,-7,-10,-12,-13,-14,-14,-12,-10,-10,-11,-11,
-12,-12,-11,-11,-14,-19,-23,-27,-27,-22,-16,-11,-9,-7,-8,-8,
-5,-1,0,0,1,4,8,8,7,7,7,7,5,2,-1,-3,-3,-3,0,4,8,9,6,
2,3,5,5,4,2,0,-1,-1,-1,1,3,5,7,7,5,2,-1,-4,-5,-6,-6,
-5,-6,-7,-10,-11,-11,-11,-13,-17,-21,-25,-26,-24,-20,-17,-16,
-15,-16,-16,-15,-12,-11,-10,-9,-7,-4,0,3,3,3,5,8,12,14,16,
14,10,5,1,-2,-6,-9,-10,-11,-12,-13,-13,-12,-10,-7,-4,-2,-1,
-1,-3,-5,-5,-3,-1,0,0,-1,-1,2,6,11,15,19,24,30,36,40,40,
35,29,24,19,14,10,8,7,6,5,4,5,7,9,9,9,10,10,7,2,-2,-2,
0,4,7,8,8,8,7,7,8,9,8,6,4,2,0,-1,0,3,6,6,5,3,3,5,9,
12,13,11,9,9,12,14,14,10,6,3,3,7,11,12,13,13,12,11,10,9,
7,6,5,4,6,7,6,2,-2,-8,-15,-19,-20,-18,-18,-21,-21,-16,-12,
-15,-21,-26,-29,-28,-24,-21,-19,-18,-18,-20,-21,-23,-25,-25,
-25,-24,-25,-27,-26,-23,-17,-13,-10,-12,-17,-18,-16,-13,-12,
-9,-5,-2,1,3,6,8,10,13,15,15,14,14,16,16,14,12,11,14,16,
13,10,8,7,4,0,-2,-6,-8,-8,-6,-2,3,7,10,10,9,12,16,20,19,
12,0,-13,-19,-20,-20,-19,-19,-19,-20,-21,-18,-13,-8,-3,0,2,
3,6,11,18,20,16,11,10,10,12,14,15,16,15,14,15,17,16,17,
19,18,13,7,8,14,16,12,5,1,-3,-5,-6,-6,-8,-12,-13,-9,-7,
-7,-7,-3,2,4,6,8,8,6,3,0,-5,-10,-13,-16,-24,-36,-47,-51,
-48,-45,-47,-54,-58,-57,-53,-49,-47,-48,-48,-43,-35,-26,-22,
-25,-28,-28,-20,-10,-1,3,3,7,15,25,38,49,52,48,45,52,64,
66,61,58,61,66,69,65,56,46,41,38,39,42,47,51,52,47,35,24,
18,15,12,15,21,28,33,37,39,40,40,36,28,21,18,19,20,16,6,
-3,-9,-14,-18,-19,-17,-15,-18,-21,-25,-32,-44,-58,-70,-79,
-88,-94,-95,-90,-80,-69,-61,-55,-49,-43,-35,-28,-22,-17,-11,
-6,-3,1,4,6,8,8,8,7,6,3,1,0,-1,-3,-3,-1,4,12,19,22,22,
22,24,25,22,18,13,11,11,9,6,5,4,3,2,1,-1,-3,-5,-6,-5,-2,
-1,-3,-5,-4,2,5,3,-2,-4,-4,-7,-11,-14,-13,-9,-5,-1,4,8,
12,14,12,8,5,4,4,7,9,10,10,9,8,7,6,3,1,1,3,4,3,2,2,2,
3,4,3,0,-4,-7,-8,-8,-8,-8,-7,-5,-2,-1,-2,-2,1,6,9,11,11,
9,6,3,2,2,3,5,6,6,7,9,10,10,6,2,0,0,0,-2,-6,-11,-15,
-19,-20,-18,-15,-12,-11,-11,-11,-10,-9,-6,-3,-1,1,3,6,9,11,
12,13,16,19,20,20,20,21,21,20,16,10,5,2,1,-1,-4,-5,-4,-2,
-1,-2,-4,-7,-8,-8,-7,-8,-9,-10,-10,-11,-12,-11,-10,-10,-12,
-13,-15,-18,-20,-20,-18,-15,-13,-10,-7,-5,-5,-5,-5,-4,-4,-3,
0,3,4,5,6,7,7,4,1,0,2,5,4,0,-3,-4,-6,-8,-8,-6,-3,0,0,
-3,-7,-11,-13,-14,-14,-14,-16,-19,-20,-19,-16,-12,-8,-4,-2,
-2,-4,-4,-2,0,2,4,5,6,7,11,14,16,17,18,18,18,19,18,18,
18,20,23,26,30,34,36,38,38,39,39,38,32,27,22,20,20,21,19,
15,10,5,0,-4,-9,-15,-19,-19,-20,-21,-23,-23,-20,-16,-13,-12,
-14,-18,-21,-23,-23,-22,-19,-16,-14,-10,-5,-1,2,2,-2,-5,-3,
2,8,10,11,13,16,17,17,17,17,18,18,17,15,13,12,13,12,11,9,
4,0,-3,-5,-6,-7,-8,-8,-8,-9,-10,-12,-11,-8,-7,-7,-10,-11,
-11,-11,-9,-8,-9,-12,-14,-14,-12,-9,-7,-5,-5,-5,-6,-6,-7,
-7,-8,-9,-10,-9,-8,-5,-3,-2,-3,-3,-5,-7,-10,-13,-15,-14,
-12,-8,-6,-4,-1,2,3,2,2,3,3,4,5,7,8,8,7,5,2,0,0,3,6,
7,4,0,-3,-2,0,-1,-3,-4,-7,-9,-10,-10,-9,-8,-6,-5,-5,-5,
-3,1,4,6,7,5,2,1,2,2,2,3,3,2,1,0,-1,-1,0,1,3,7,11,13,
14,17,20,22,21,19,16,14,15,19,20,19,15,12,10,10,12,15,18,
18,18,18,16,13,11,7,4,1,-1,-2,-2,-1,-1,-1,-4,-6,-8,-9,
-11,-14,-15,-15,-14,-15,-15,-15,-14,-14,-15,-16,-17,-17,-18,
-20,-20,-19,-18,-17,-17,-16,-14,-11,-10,-8,-5,-2,1,4,8,10,
10,11,16,21,24,25,27,27,25,22,19,15,10,6,1,-4,-8,-11,-14,
-16,-17,-17,-17,-16,-15,-14,-10,-6,-1,3,6,7,6,3,-1,-3,-5,
-8,-9,-8,-5,-3,-3,-4,-5,-4,-2,1,3,5,7,7,7,8,9,9,6,4,3,
5,8,10,11,10,10,10,9,8,2,-4,-9,-11,-14,-16,-16,-16,-17,
-17,-18,-16,-14,-14,-16,-17,-15,-12,-12,-12,-12,-13,-14,-12,
-6,0,4,6,7,8,8,8,9,10,12,16,19,20,17,14,13,14,14,12,11,
11,11,11,10,9,8,9,10,11,12,12,10,7,5,4,4,5,7,8,10,10,9,
8,6,4,2,1,-1,-2,-3,-5,-7,-8,-10,-9,-9,-8,-8,-7,-7,-6,-6,
-6,-5,-4,-4,-5,-4,-3,-2,-2,-2,-2,-3,-4,-5,-6,-7,-8,-8,-8,
-8,-8,-8,-8,-7,-6,-4,-2,0,-1,-2,-2,-1,0,3,4,4,5,7,9,9,
9,9,9,9,10,12,13,15,16,17,16,13,9,4,-1,-6,-9,-11,-13,-16,
-20,-24,-28,-33,-38,-40,-41,-40,-39,-37,-36,-35,-33,-29,-25,
-21,-18,-16,-13,-9,-6,-4,-2,0,3,6,9,12,14,14,14,14,15,16,
18,20,22,24,23,22,22,22,21,20,19,19,18,17,16,14,12,12,14,
17,19,19,19,18,16,13,10,8,6,5,4,3,1,0,-1,-2,-2,-2,-2,-2,
-2,-2,-1,-1,-3,-5,-7,-7,-6,-6,-5,-4,-2,0,1,0,-1,-2,-1,-1,
-1,-2,-2,-2,-2,-2,-3,-3,-2,-1,-2,-3,-4,-6,-8,-9,-10,-10,
-9,-8,-8,-7,-7,-6,-7,-7,-7,-7,-7,-5,-3,0,1,2,2,1,-1,-3,
-5,-5,-5,-4,-3,-4,-5,-5,-3,-2,-1,0,1,2,2,1,0,-1,-1,-1,
-1,-1,-2,-2,-1,0,0,1,1,2,2,2,2,4,7,11,12,11,9,9,10,11,
12,13,13,14,14,14,14,15,16,18,20,20,19,17,15,14,14,12,11,
9,9,8,8,9,9,9,7,4,2,0,-2,-4,-7,-10,-13,-14,-15,-16,-16,
-17,-18,-18,-18,-18,-17,-16,-15,-15,-14,-12,-10,-10,-11,-12,
-12,-11,-10,-9,-8,-8,-7,-6,-5,-4,-4,-4,-5,-4,-3,-1,-1,-2,
-3,-4,-6,-8,-9,-10,-10,-8,-7,-6,-7,-8,-9,-9,-9,-9,-9,-8,
-8,-7,-7,-8,-8,-7,-6,-5,-4,-4,-4,-3,-1,2,5,5,5,5,6,7,9,
11,12,13,15,17,19,19,19,18,16,13,12,12,10,8,8,9,9,10,10,
9,7,4,2,1,1,2,1,1,2,3,5,7,7,6,5,5,5,4,3,2,1,2,2,3,
4,3,0,-2,-2,-2,-1,1,2,2,0,-2,-4,-5,-5,-4,-3,-2,-3,-2,-1,
1,2,2,1,0,0,-1,-2,-4,-5,-5,-5,-5,-5,-6,-7,-7,-7,-6,-5,
-4,-4,-3,-2,-2,-3,-4,-4,-3,-1,-1,0,0,1,2,5,8,10,9,6,4,
2,2,1,0,-1,-2,-2,-2,-2,-2,-2,-3,-3,-2,-1,0,1,1,1,1,3,4,
5,5,5,4,4,5,4,2,0,0,2,3,5,5,4,1,-1,-1,0,0,0,-1,-1,-1,
0,2,2,2,1,0,-1,-2,-3,-4,-4,-4,-3,-2,-2,-3,-4,-4,-4,-3,
-3,-3,-3,-3,-4,-5,-5,-4,-3,-2,-1,-1,0,0,0,1,2,1,1,0,-1,
-2,-3,-3,-2,0,2,2,-1,-4,-6,-8,-9,-10,-11,-12,-11,-10,-8,
-5,-1,2,5,8,11,11,9,7,6,5,4,3,3,3,2,1,1,1,1,2,2,1,1,
1,2,3,4,4,5,5,5,5,5,5,5,4,3,2,1,1,1,1,2,3,4,3,3,2,
2,1,1,1,0,0,0,0,0,0,1,2,3,3,4,4,4,4,4,4,4,4,5,6,7,
7,7,6,5,4,3,1,0,1,2,0,-2,-5,-7,-8,-8,-9,-8,-8,-7,-7,-6,
-6,-6,-6,-7,-6,-5,-4,-3,-3,-3,-5,-5,-5,-5,-4,-4,-5,-4,-4,
-3,-2,-3,-3,-4,-4,-4,-3,-2,-1,-1,-1,-1,-1,-1,0,0,1,2,3,
4,4,4,3,3,3,4,4,4,3,2,3,3,4,6,7,9,9,9,8,8,8,8,7,7,
6,6,6,5,4,3,2,1,1,1,2,2,2,1,0,-1,-1,-2,-3,-4,-5,-6,-6,
-6,-7,-6,-4,-1,1,3,3,3,2,2,0,-1,-2,-3,-4,-6,-8,-8,-7,-6,
-6,-6,-6,-5,-4,-3,-2,-1,-1,-2,-3,-3,-4,-4,-4,-4,-4,-3,-2,
-1,-1,-1,-3,-3,-3,-3,-4,-4,-5,-5,-5,-6,-7,-7,-7,-6,-6,-7,
-7,-7,-7,-7,-6,-6,-5,-6,-7,-8,-8,-7,-7,-6,-5,-4,-3,-2,-1,
1,3,4,3,2,1,0,0,1,1,3,4,4,4,4,4,4,3,3,4,4,4,4,5,5,
4,4,5,7,9,9,9,9,10,10,11,12,13,14,15,16,16,16,15,14,12,
11,10,9,7,6,5,4,3,2,2,2,1,1,-1,-2,-4,-6,-8,-9,-9,-8,-7,
-7,-6,-6,-5,-5,-5,-6,-7,-8,-8,-7,-6,-6,-6,-5,-5,-5,-6,-6,
-5,-4,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-2,-1,-1,-1,-2,-3,-3,
-3,-1,0,1,1,1,1,1,2,3,5,6,7,7,8,8,8,7,6,5,3,3,3,4,5,
5,4,4,4,4,3,2,1,0,-2,-3,-4,-5,-5,-4,-3,-2,-1,0,0,0,0,
-1,-1,-1,0,1,2,2,3,2,1,0,-1,0,0,1,1,1,0,0,-1,-1,-1,-2,
-3,-4,-6,-6,-6,-7,-7,-7,-7,-7,-6,-6,-6,-5,-5,-4,-4,-3,-2,
-2,-1,-1,-1,-2,-2,-1,0,1,1,1,2,2,2,2,2,1,1,0,-1,-2,-3,
-2,-1,-1,-1,-1,0,2,3,4,5,5,4,4,3,3,2,1,0,0,1,2,2,2,2,
2,3,3,4,3,3,3,3,3,4,5,7,9,9,9,9,10,9,8,7,6,6,5,5,5,
5,4,2,1,-1,-2,-2,-2,-1,-1,0,0,0,-2,-3,-5,-5,-5,-5,-5,-5,
-5,-4,-4,-3,-1,1,2,2,2,1,1,1,2,2,2,1,1,-1,-3,-4,-6,-7,
-8,-10,-13,-15,-15,-13,-11,-10,-9,-10,-11,-12,-13,-14,-13,
-12,-14,-15,-16,-16,-14,-11,-9,-7,-7,-6,-6,-5,-4,-2,0,1,2,
3,3,4,5,6,7,8,9,9,10,10,11,11,12,12,11,10,9,9,10,11,13,
15,16,17,17,17,16,15,14,14,13,12,10,9,8,9,9,9,8,8,7,6,
5,4,4,3,2,1,1,0,0,0,0,1,1,1,2,1,1,1,1,0,0,0,1,1,1,
1,2,2,2,1},{0,1,2,1,-1,1,2,-1,-4,-3,0,0,1,4,5,1,-4,-5,
-2,-2,-6,-9,-10,-12,-9,-2,2,2,3,4,6,8,12,13,10,6,4,5,10,
14,10,4,0,-2,-4,-7,-9,-7,-7,-10,-13,-15,-13,-2,5,2,-2,0,
5,6,3,2,2,3,2,3,5,11,16,16,13,9,5,1,-2,-4,-4,-3,-2,-2,
-2,-1,2,4,5,6,9,12,12,10,2,-17,-27,-17,0,14,20,15,6,-1,
-8,-17,-28,-39,-48,-51,-42,-20,7,25,29,28,33,37,36,35,36,
34,20,0,-11,-12,-12,-15,-24,-33,-34,-29,-21,-13,-7,-10,-16,
-13,0,7,3,-7,-19,-30,-41,-49,-49,-35,-8,15,22,22,22,19,9,
6,19,38,45,35,7,-19,-27,-16,3,19,28,35,40,41,34,26,22,20,
17,15,14,15,15,15,15,14,14,15,18,19,15,7,-9,-35,-63,-71,
-51,-28,-17,-12,-9,-7,-7,-6,-5,-2,1,5,4,0,-4,-6,-5,-7,-13,
-19,-19,-14,-11,-11,-14,-17,-19,-18,-14,-8,-2,4,9,13,18,22,
25,26,23,18,16,19,23,26,30,33,35,34,32,27,23,21,22,21,17,
9,0,-6,-11,-15,-19,-20,-20,-20,-19,-19,-21,-28,-36,-38,-32,
-20,-6,10,23,32,38,38,34,26,17,7,-7,-20,-26,-19,-8,-3,-4,
-5,-1,2,0,-7,-15,-22,-27,-30,-28,-21,-13,-7,-6,-6,-5,-1,5,
10,14,18,21,22,23,23,25,28,33,41,52,62,67,66,60,48,28,6,
-13,-26,-35,-42,-50,-56,-58,-58,-57,-56,-53,-45,-35,-24,-17,
-15,-18,-21,-23,-26,-30,-32,-30,-25,-19,-14,-10,-4,3,7,9,14,
24,33,38,38,34,27,22,22,24,27,32,36,37,33,26,22,19,15,10,
6,3,2,1,0,0,-3,-9,-15,-18,-20,-25,-30,-31,-28,-19,-10,-2,
5,16,29,37,37,31,24,21,24,32,39,43,46,45,42,38,39,47,56,
57,47,31,14,-1,-13,-23,-32,-42,-50,-57,-69,-81,-86,-82,-70,
-57,-47,-38,-29,-22,-20,-20,-22,-23,-23,-22,-22,-26,-32,-35,
-34,-30,-26,-21,-15,-9,-4,-3,-5,-7,-9,-10,-9,-8,-9,-9,-9,
-8,-6,-2,4,12,23,35,46,52,53,51,47,41,37,33,29,26,24,24,
25,26,27,26,26,25,22,16,11,7,4,1,-5,-11,-16,-19,-19,-14,
-9,-7,-10,-12,-12,-11,-9,-9,-10,-11,-12,-12,-10,-7,-2,4,8,
9,9,9,9,9,7,4,1,-3,-10,-15,-17,-16,-15,-13,-11,-8,-7,-5,
-4,-3,-3,-4,-3,0,5,9,14,18,21,20,19,20,23,26,26,22,17,13,
9,5,0,-5,-10,-15,-17,-17,-15,-14,-15,-16,-18,-19,-21,-22,
-25,-29,-32,-34,-32,-26,-17,-10,-5,-2,1,3,4,2,0,-3,-4,-6,
-5,-4,-2,-1,-1,-2,-3,-4,-4,-6,-9,-13,-16,-17,-16,-13,-9,
-11,-13,-14,-12,-8,0,13,24,31,31,29,30,34,35,31,27,23,22,
23,23,22,19,17,15,12,9,9,10,10,9,9,8,7,10,12,12,8,3,-5,
-12,-15,-14,-12,-11,-10,-12,-14,-13,-11,-10,-12,-12,-9,-5,-3,
-2,-1,1,3,5,4,2,-1,-4,-6,-7,-4,1,4,3,1,1,4,6,6,6,4,3,
1,0,1,2,5,8,11,13,13,13,11,10,9,9,10,11,11,9,9,10,11,
11,10,6,-1,-7,-9,-9,-9,-9,-10,-12,-14,-15,-16,-16,-18,-19,
-20,-20,-18,-15,-15,-16,-16,-13,-9,-4,2,7,8,8,7,6,4,2,-1,
-3,-5,-8,-12,-14,-15,-15,-15,-13,-11,-11,-13,-15,-17,-18,-18,
-18,-19,-22,-26,-27,-28,-28,-28,-26,-24,-18,-10,0,8,13,15,
16,16,14,11,9,9,7,5,2,2,3,4,4,5,8,11,11,7,2,-2,-3,-2,
1,2,3,3,3,3,5,7,8,8,7,6,3,0,-1,0,2,3,2,0,-3,-3,-1,3,
5,5,3,3,6,10,13,14,11,6,3,5,8,10,12,14,16,17,18,19,19,
20,19,19,23,27,30,33,34,32,26,21,19,19,17,12,9,13,18,19,
16,10,4,1,1,1,2,3,4,4,3,1,-2,-4,-5,-6,-9,-14,-19,-20,
-19,-15,-11,-12,-17,-21,-22,-24,-26,-27,-27,-26,-25,-24,-23,
-21,-19,-16,-12,-11,-10,-8,-5,-2,-1,-3,-3,1,5,7,7,8,10,9,
8,6,2,-3,-7,-10,-10,-9,-6,-3,-2,-2,0,6,16,25,30,27,18,10,
6,2,-1,-2,-5,-11,-17,-21,-22,-22,-21,-19,-20,-21,-22,-18,-9,
-3,-3,-5,-6,-6,-6,-4,-2,0,0,0,2,4,4,7,13,16,14,9,9,16,
22,24,23,21,18,16,16,16,14,8,5,5,5,2,0,1,5,7,11,16,20,
24,28,30,31,32,35,38,38,30,18,9,7,8,5,-4,-14,-21,-24,-26,
-30,-37,-46,-51,-50,-46,-43,-48,-57,-65,-68,-67,-63,-63,-68,
-72,-73,-71,-62,-48,-41,-43,-46,-39,-26,-18,-17,-16,-11,-1,
11,18,19,16,13,10,8,10,16,25,36,42,39,33,28,22,15,11,11,
15,19,24,30,38,47,52,51,49,49,53,62,66,64,62,59,55,50,48,
51,54,56,60,65,67,64,56,47,35,20,3,-14,-26,-32,-36,-38,-41,
-45,-48,-47,-46,-45,-44,-41,-39,-36,-33,-29,-26,-22,-19,-16,
-13,-12,-12,-13,-14,-16,-20,-25,-28,-28,-24,-18,-14,-11,-8,
-2,4,7,7,6,7,8,9,8,7,8,8,7,8,7,5,2,-1,-1,1,2,-1,-5,
-5,-1,4,5,3,3,4,2,-3,-10,-13,-16,-17,-17,-15,-12,-7,-1,1,
0,-2,-4,-4,-3,-1,1,3,4,5,6,6,5,3,2,3,4,4,3,3,4,5,8,
10,10,7,4,2,1,-2,-4,-6,-7,-5,-5,-8,-10,-10,-7,-4,0,4,5,
4,2,1,0,0,0,1,2,3,6,10,13,14,12,11,12,15,16,16,13,8,3,
-2,-5,-6,-6,-7,-8,-11,-13,-15,-15,-15,-16,-16,-16,-15,-13,
-11,-11,-10,-6,-3,0,2,5,9,15,19,21,20,18,17,16,15,12,10,
9,11,13,14,13,10,9,9,9,9,8,8,7,5,4,4,5,6,6,5,4,0,-4,
-8,-10,-12,-13,-12,-11,-9,-10,-10,-10,-10,-12,-12,-11,-9,-8,
-7,-4,-1,2,2,-1,-2,0,5,6,6,5,4,2,-1,-4,-4,-1,3,6,6,5,
3,0,-3,-3,-3,-5,-10,-15,-19,-22,-22,-21,-19,-17,-18,-20,-21,
-22,-22,-22,-22,-22,-24,-24,-23,-21,-18,-16,-15,-14,-13,-12,
-12,-13,-14,-15,-15,-13,-10,-6,-1,3,7,12,19,25,27,26,25,24,
27,31,35,37,38,37,37,36,33,27,23,20,18,14,8,4,3,4,6,9,8,
6,2,-2,-7,-11,-13,-15,-18,-19,-17,-13,-9,-7,-10,-16,-18,-17,
-14,-12,-11,-9,-6,-3,-1,0,2,5,8,10,11,11,12,14,17,20,22,
21,19,17,16,15,13,12,11,11,11,8,5,4,6,8,8,6,4,3,2,3,5,
5,2,-1,-4,-5,-5,-3,-1,0,0,0,0,0,0,-1,-2,-4,-6,-6,-5,-3,
-2,0,1,2,2,-1,-4,-9,-12,-13,-14,-15,-15,-13,-11,-9,-9,-9,
-8,-9,-8,-7,-5,-3,0,2,2,0,-3,-4,-2,1,5,6,3,0,1,3,4,4,
3,1,-2,-4,-6,-8,-9,-9,-9,-11,-13,-14,-13,-10,-7,-4,-4,-5,
-6,-6,-7,-7,-6,-5,-5,-6,-7,-9,-11,-14,-16,-17,-16,-14,-13,
-13,-10,-6,-2,2,3,1,-2,-1,3,8,10,9,7,5,3,3,6,9,12,15,
18,20,22,23,23,21,20,18,17,16,17,18,20,19,18,18,17,15,13,
10,9,9,7,6,6,6,5,4,3,2,1,-1,-4,-7,-8,-9,-11,-14,-16,-18,
-18,-20,-21,-22,-22,-22,-20,-18,-17,-18,-18,-15,-10,-6,-1,4,
10,14,17,20,23,24,24,23,21,18,15,12,8,4,1,-2,-5,-8,-11,
-13,-12,-10,-7,-3,2,5,5,5,4,2,-1,-5,-6,-5,-4,-4,-6,-8,
-10,-10,-10,-8,-6,-5,-4,-4,-1,1,3,2,1,-1,-2,1,4,6,8,10,
13,18,22,22,19,16,14,11,8,6,5,3,0,-3,-3,-3,-4,-7,-10,-10,
-10,-10,-11,-13,-17,-22,-26,-25,-22,-20,-17,-16,-15,-15,-15,
-15,-16,-14,-11,-5,-1,-1,-2,-1,0,1,2,1,2,3,4,4,2,1,2,3,
4,6,9,10,9,7,5,4,4,4,6,9,11,13,14,15,15,14,14,14,14,13,
13,11,9,7,5,4,3,3,2,2,2,1,1,1,2,1,0,0,1,2,2,3,4,4,4,
4,4,2,1,0,-1,-1,-3,-4,-5,-7,-8,-8,-6,-5,-5,-6,-7,-8,-8,
-7,-7,-7,-6,-4,-2,-2,-1,0,1,1,2,3,6,9,13,18,22,26,28,29,
28,26,25,25,25,25,24,23,20,15,9,3,-3,-8,-11,-14,-18,-22,
-26,-29,-30,-30,-32,-33,-33,-32,-31,-32,-32,-32,-31,-30,-28,
-25,-22,-21,-21,-20,-19,-19,-18,-16,-12,-9,-7,-5,-4,-2,-1,0,
2,3,3,4,5,4,1,-1,0,3,6,9,11,14,16,16,16,15,15,14,14,14,
13,12,11,10,9,8,8,8,7,7,8,10,9,7,5,4,2,1,0,-1,0,2,4,
4,4,3,3,4,4,4,4,4,4,4,3,3,4,5,6,7,7,6,5,3,1,0,-1,-2,
-2,-2,-2,-2,-3,-3,-5,-6,-8,-8,-7,-6,-4,-2,0,1,1,0,-2,-3,
-4,-4,-4,-4,-6,-7,-7,-7,-7,-7,-6,-5,-4,-3,-3,-4,-5,-5,-4,
-5,-6,-7,-8,-8,-8,-9,-9,-9,-9,-10,-12,-13,-12,-8,-6,-5,-6,
-7,-7,-6,-5,-4,-3,-2,-2,-2,-1,-1,0,3,6,9,11,12,12,13,14,
15,15,14,15,15,15,16,19,21,22,22,23,23,24,24,23,21,19,16,
14,13,12,10,8,6,4,2,1,0,-1,-2,-3,-2,-1,0,-1,-2,-4,-5,-5,
-5,-5,-6,-6,-6,-5,-4,-3,-3,-4,-5,-3,-2,0,1,2,2,2,0,-2,
-4,-5,-5,-3,-3,-3,-4,-5,-6,-7,-8,-8,-9,-9,-9,-10,-11,-12,
-13,-13,-13,-14,-15,-17,-18,-18,-17,-15,-14,-15,-15,-15,-15,
-15,-14,-13,-12,-11,-8,-5,-2,1,3,3,3,4,5,4,2,2,3,4,5,7,
9,9,7,5,4,3,3,2,0,-1,-1,1,3,4,5,5,5,6,6,6,5,4,4,4,6,
8,8,7,5,4,2,3,4,6,8,8,7,4,2,1,1,1,1,0,-1,0,1,3,4,4,
5,5,6,6,5,4,3,2,3,2,1,0,-1,-2,-3,-4,-4,-4,-3,-3,-2,-3,
-5,-6,-6,-6,-6,-6,-6,-7,-8,-6,-2,1,4,4,4,3,3,4,4,3,2,1,
0,0,0,-1,-2,-3,-4,-4,-4,-3,-3,-4,-4,-4,-2,-1,0,0,1,2,3,
4,3,1,-1,0,1,3,5,6,5,3,2,3,3,2,2,1,0,1,3,4,4,5,5,5,
5,4,3,2,1,2,2,2,2,1,1,0,0,0,0,0,0,0,-2,-3,-4,-3,-3,
-3,-2,-2,-2,-2,-1,1,1,2,2,2,1,-1,-2,-2,0,3,5,5,5,3,2,
0,-2,-4,-7,-10,-13,-15,-15,-15,-14,-13,-9,-5,-1,0,0,0,0,0,
0,0,0,0,-1,-1,-2,-2,-1,-1,-2,-3,-3,-3,-3,-3,-2,-1,-1,-1,
0,1,2,3,3,3,2,1,1,0,0,0,1,2,2,2,2,3,2,2,2,1,0,0,0,
0,-1,-2,-2,-1,-1,0,0,1,1,2,1,1,1,2,2,4,6,7,8,9,9,9,8,
8,9,11,12,11,10,8,7,5,3,3,2,1,1,1,1,1,0,-1,-2,-2,-2,0,
1,0,0,-1,-2,-2,-2,-2,-3,-4,-3,-3,-2,-2,-3,-4,-5,-6,-5,-5,
-5,-5,-4,-5,-5,-5,-6,-6,-6,-6,-5,-4,-3,-3,-3,-3,-3,-3,-2,
-2,-3,-3,-4,-5,-5,-4,-3,-1,0,1,2,2,3,4,4,4,5,6,7,7,7,
7,7,6,5,5,6,7,7,8,8,8,8,7,7,6,5,4,3,1,-1,-3,-4,-2,-1,
1,3,5,6,7,7,7,7,7,6,5,3,1,1,0,0,-1,-1,-2,-2,-2,0,1,2,
1,1,1,0,0,0,0,-1,-1,-1,1,2,2,2,2,2,2,2,2,1,1,1,0,0,
-1,-1,-1,-1,-2,-3,-3,-4,-4,-5,-4,-3,-3,-5,-6,-7,-8,-9,-10,
-10,-11,-11,-11,-11,-10,-8,-7,-5,-5,-6,-7,-8,-8,-9,-8,-7,
-7,-6,-6,-5,-5,-6,-6,-6,-6,-6,-6,-6,-6,-7,-8,-8,-7,-6,-5,
-5,-5,-5,-4,-4,-3,-2,-1,0,3,5,7,8,9,10,11,12,12,12,12,
12,12,11,11,11,11,12,13,13,13,12,11,8,6,5,4,4,3,3,3,3,
4,4,3,2,1,0,0,0,-1,-1,-1,-1,-1,-3,-4,-4,-3,-3,-3,-3,-3,
-3,-3,-3,-4,-4,-5,-4,-3,-2,-3,-3,-4,-5,-6,-6,-6,-6,-5,-5,
-6,-7,-7,-7,-6,-4,-3,-2,-1,0,1,3,3,3,2,1,1,2,2,3,3,4,
5,6,6,6,7,7,6,5,3,1,0,0,-1,-2,-1,0,0,1,1,0,-1,-1,-1,
-1,0,1,3,3,3,2,2,1,2,2,3,4,4,4,4,4,5,6,6,5,4,3,2,1,
1,-1,-2,-2,-3,-3,-4,-4,-5,-5,-5,-5,-5,-4,-4,-4,-4,-5,-5,
-5,-5,-4,-4,-4,-3,-2,-2,-1,-1,0,0,0,-1,-2,-3,-4,-4,-4,-5,
-6,-6,-6,-5,-3,-2,-1,-1,0,0,0,0,0,-2,-3,-3,-2,-2,-3,-3,
-3,-3,-2,-2,-2,-2,-3,-3,-4,-5,-4,-3,-1,0,1,2,4,5,6,6,6,
6,6,7,8,9,9,9,8,7,6,5,5,4,5,6,7,7,7,6,5,4,3,2,1,1,
0,-1,-2,-2,-2,0,2,3,3,3,3,4,5,6,7,8,10,10,10,10,10,9,
9,8,6,2,0,-1,-1,0,1,1,1,-1,-2,-3,-3,-3,-5,-7,-11,-13,
-15,-15,-15,-14,-14,-15,-16,-17,-17,-17,-16,-16,-15,-15,-14,
-15,-15,-14,-13,-12,-12,-11,-10,-9,-9,-8,-6,-5,-5,-5,-6,-7,
-8,-8,-7,-5,-3,-1,1,3,4,4,5,6,8,8,7,6,6,7,8,8,8,9,10,
10,9,9,9,9,9,8,7,7,6,5,5,5,5,5,6,6,6,6,6,5,5,5,5,5,
5,6,6,7,8}};

