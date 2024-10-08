//#############################################################################
//! \file mpyCVbyCVOutput.c
//! \brief  Ouput Vector (64) 
//! \author Vishal Coelho 
//! \date   22-Jul-2016
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// 
// C2000Ware v5.03.00.00
//
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################


const double test_golden[128] = {
    -2.779725843757L, -3.869849252576L,  5.970122522245L,  4.413324374479L, 
     1.109192729078L,  0.655816679926L,  3.938810419917L, -9.018783548419L, 
    -1.544650374774L,  4.449389534724L,  3.855928027986L,  2.090016002028L, 
    -1.172804854780L, -7.545355560066L,  2.186459829314L,  4.076011818226L, 
     4.879402564335L,  7.188604070407L,  0.233715646720L, -3.034916887300L, 
    -5.954199580721L, -3.366636628674L, -6.401715104950L,  2.712563227222L, 
     4.583604288592L, -6.922696560456L,  4.243519239449L, -1.452869150337L, 
    -3.489191404387L,  3.773824883773L, -0.134428259017L, -0.723070197144L, 
     1.020533996793L,  0.196742708980L, -8.096336142984L, -4.109497259108L, 
    -2.016530664287L, -4.246916710100L, -6.442851973200L, -4.344826767039L, 
    -1.464563517850L, -5.384859554228L,  2.487854288157L,  7.138614668970L, 
    -4.636376595193L,  3.905574627354L, -4.658443646418L, -9.740747272718L, 
     1.548041012608L, -3.834688575855L,  5.407462643231L, -2.159688703959L, 
    -4.647843674718L, -2.461033051483L, -1.086577086601L,  0.462837223446L, 
    -0.766412540387L, -1.356765161000L, -9.859211796950L, -1.086877876762L, 
     0.132234878300L, -2.808051995582L,  2.580884823009L, 11.505988470600L, 
    -3.568185135330L, -2.804217719411L,  2.555219284946L, -8.462140222765L, 
     2.930361816091L,  5.949685481249L, -3.727561714245L, -4.347994836733L, 
    -6.330452503562L,  3.521035799062L,  3.717864750832L, -3.616593476128L, 
     8.564285027571L, -1.607884782338L, -8.115593253442L,  4.884198823147L, 
     1.175618597245L, -1.241430764293L,  1.208047269455L, -2.759985908677L, 
    -5.383845504362L, -0.434899657987L,  0.615877850234L, -5.351831146696L, 
    -2.451719468012L,  4.912730803354L,  1.971180748229L, -4.674185239112L, 
     0.833595484478L,  1.055166789331L, -1.782869621579L,  5.483909196360L, 
    -3.202300880551L, -5.021344540091L,  6.205674521880L,  1.393071287325L, 
     2.824598221110L, -4.689225572855L,  5.707350810823L, -3.971144526801L, 
    -0.361319376158L,  2.697041387880L, -1.798485401082L, -7.057290217751L, 
    -3.870209047283L, -3.903523548273L,  0.197788679933L,  0.698814331288L, 
    -0.689683969650L, -7.668678131566L,  2.744688985447L, -5.511869102633L, 
     8.613566602309L,  4.130814283289L, -1.877661781348L,  0.852997387145L, 
     2.514990610723L,  3.719964664989L,  7.956641108137L, -3.501848766879L, 
    -0.081160727638L, -7.047037875842L,  2.657724571368L, -0.115818563834L, 
}; 


// End of File
