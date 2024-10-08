//#############################################################################
//! \file f64byf64Input.c
//! \brief  FID Input Vectors (256) 
//! \author Vishal Coelho 
//! \date   15-Apr-2016
//! 
//
//  Group:            C2000
//  Target Family:    $DEVICE$
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


#include <stdint.h>

const double test_dividend[256] = {
           1.314641e+308,        4.433504e+307,        1.471249e+307,        1.533268e+308, 
           1.234210e+308,        1.722389e+308,        1.770828e+308,        9.612672e+307, 
           1.628675e+308,        8.568680e+307,        1.599356e+308,        4.287455e+306, 
           2.314077e+307,        1.331444e+308,        7.029343e+307,        7.076232e+307, 
           1.081939e+308,        4.293875e+306,        6.969135e+307,        1.020121e+307, 
           1.239636e+308,        9.355032e+307,        1.367801e+307,        7.303304e+307, 
           7.733907e+307,        1.185241e+308,        3.926003e+307,        1.457725e+307, 
           8.407302e+307,        1.309928e+308,        1.103755e+308,        1.618998e+308, 
           4.544197e+307,        3.956638e+307,        4.239050e+307,        1.456364e+308, 
           1.262716e+308,        1.579282e+308,        1.278180e+308,        1.188419e+308, 
           7.902253e+307,        1.011730e+308,        1.780276e+308,        1.720959e+308, 
           6.054959e+307,        2.794618e+307,        7.497803e+307,        9.967795e+307, 
           5.348518e+306,        1.558072e+308,        1.607882e+308,        8.937957e+307, 
           3.762338e+307,        1.297210e+308,        1.257875e+308,        8.282821e+307, 
           3.066739e+307,        1.428036e+308,        1.597250e+308,        2.561974e+307, 
           1.689241e+308,        4.689375e+304,        7.888368e+307,        2.007622e+306, 
           4.215869e+307,        1.270941e+308,        1.247895e+308,        4.766059e+307, 
           5.870792e+307,        1.676060e+307,        7.478287e+306,        1.364953e+308, 
           5.840246e+307,        9.380755e+307,        1.711202e+308,        1.202618e+308, 
           8.505275e+307,        1.167372e+308,        1.196609e+308,        4.137345e+307, 
           1.446945e+308,        9.038532e+307,        7.802522e+307,        1.274625e+308, 
           9.981943e+307,        4.584186e+307,        1.351875e+307,        1.059025e+308, 
           1.212080e+308,        1.057068e+308,        9.594329e+307,        8.496192e+307, 
           5.821132e+307,        7.747807e+307,        1.375052e+308,        1.791334e+308, 
           4.764216e+307,        1.423893e+308,        2.419861e+307,        6.388309e+306, 
           8.160565e+307,        1.012060e+308,        4.150564e+307,        2.602384e+307, 
           1.217211e+308,        6.365101e+307,        9.176726e+307,        1.248869e+308, 
           1.070154e+308,        9.098318e+307,        1.395728e+308,        1.231784e+308, 
           5.743515e+307,        1.495938e+308,        1.187954e+308,        1.055369e+308, 
           3.429716e+306,        1.504579e+308,        2.049332e+307,        1.510818e+308, 
           6.067155e+307,        7.719935e+307,        1.426970e+308,        2.544949e+307, 
           1.093181e+308,        1.672985e+308,        1.144131e+308,        8.587698e+306, 
           1.255412e+308,        4.622040e+307,        1.242029e+308,        6.528858e+307, 
           9.741416e+307,        3.993430e+307,        1.627788e+308,        6.715124e+307, 
           1.416879e+307,        5.560254e+306,        1.126975e+308,        1.684432e+308, 
           5.751455e+307,        1.339595e+308,        5.194046e+307,        2.235504e+307, 
           9.241599e+307,        6.966274e+307,        1.759240e+308,        5.245987e+307, 
           1.064850e+308,        1.027124e+308,        1.107120e+308,        1.008352e+308, 
           5.031013e+307,        2.729790e+307,        1.317732e+308,        7.136576e+306, 
           1.441071e+308,        7.306129e+307,        1.492106e+308,        1.745624e+308, 
           7.594949e+307,        9.690437e+306,        1.414851e+308,        1.132685e+308, 
           9.147011e+307,        1.020526e+308,        5.558303e+307,        1.343121e+308, 
           6.052129e+307,        1.588000e+308,        5.998110e+307,        1.430990e+308, 
           1.446754e+308,        9.031372e+306,        7.235807e+307,        1.735118e+308, 
           7.449208e+307,        5.941800e+307,        1.144002e+308,        1.542466e+308, 
           1.417093e+308,        9.678955e+307,        1.333296e+308,        1.329791e+308, 
           7.996042e+307,        1.528776e+308,        8.890219e+307,        1.704496e+308, 
           1.434178e+308,        2.391733e+307,        4.274371e+307,        2.296076e+307, 
           9.601846e+307,        1.019233e+307,        8.423541e+307,        1.766571e+308, 
           1.226424e+308,        1.565612e+308,        8.920343e+307,        5.171284e+307, 
           3.290126e+307,        1.727977e+308,        1.359526e+308,        1.708444e+308, 
           1.206731e+308,        3.344691e+307,        5.210469e+307,        1.046398e+307, 
           7.921755e+306,        5.025610e+307,        3.064521e+307,        1.217219e+308, 
           1.622271e+308,        6.327652e+307,        1.800543e+307,        1.425575e+308, 
           8.420978e+307,        1.235629e+308,        1.227966e+308,        7.576124e+307, 
           1.185296e+308,        1.138708e+308,        9.440514e+307,        3.438653e+307, 
           9.202499e+307,        1.345268e+308,        7.547200e+307,        1.325762e+308, 
           1.234058e+308,        1.718102e+308,        5.535213e+307,        6.153519e+307, 
           6.957676e+307,        4.705625e+306,        1.138922e+308,        1.016148e+308, 
           6.570774e+307,        7.576534e+307,        8.308943e+307,        5.652644e+307, 
           4.056705e+307,        2.084189e+307,        2.408299e+307,        1.701559e+308, 
           8.852434e+307,        1.345059e+308,        5.589660e+307,        1.385174e+306, 
           1.106699e+308,        6.428071e+307,        1.166396e+308,        1.520807e+308, 
           1.822020e+307,        1.057586e+308,        1.046944e+308,        9.380430e+307, 
}; 

const double test_divisor[256] = {
           8.172310e+307,        1.737834e+308,        3.277320e+307,        1.005615e+308, 
           1.126209e+308,        5.416449e+306,        1.154610e+308,        1.506757e+308, 
           7.103333e+307,        7.862071e+307,        1.525932e+307,        1.045138e+308, 
           1.567017e+308,        3.719554e+307,        1.700798e+307,        3.378804e+307, 
           1.200565e+308,        1.316668e+308,        1.134363e+308,        8.416910e+307, 
           5.651270e+307,        1.153160e+308,        1.010352e+308,        1.193177e+308, 
           2.244906e+307,        1.211694e+308,        1.222991e+308,        1.672071e+308, 
           1.489963e+308,        3.201698e+307,        1.706443e+308,        3.588606e+307, 
           3.913230e+307,        1.531983e+306,        5.404343e+307,        4.934143e+307, 
           1.054254e+308,        7.128803e+307,        3.350950e+307,        7.061633e+307, 
           2.779123e+307,        1.496228e+308,        2.692083e+307,        1.221615e+308, 
           1.348432e+308,        2.676767e+306,        2.557156e+307,        5.510937e+306, 
           1.453786e+308,        8.475396e+306,        1.197590e+308,        8.198064e+307, 
           1.443541e+308,        6.443632e+307,        4.554284e+306,        3.929544e+307, 
           1.278007e+308,        9.867911e+307,        1.563441e+308,        1.328200e+308, 
           1.855761e+307,        1.746339e+308,        1.327979e+308,        2.491167e+306, 
           1.220852e+308,        8.727849e+307,        6.241294e+306,        2.057273e+307, 
           1.377484e+307,        1.092682e+308,        4.197000e+307,        2.552930e+307, 
           9.530887e+307,        1.672396e+308,        1.109002e+308,        1.240214e+308, 
           4.214258e+307,        3.718418e+307,        6.717308e+306,        1.192527e+308, 
           9.118881e+307,        8.733201e+307,        1.549063e+308,        1.735700e+308, 
           1.365686e+308,        4.434540e+307,        1.215721e+308,        1.364998e+308, 
           1.053789e+308,        1.478493e+308,        1.666165e+308,        1.146150e+308, 
           3.404447e+306,        3.313879e+307,        4.807159e+306,        1.680841e+308, 
           8.709236e+307,        1.428781e+308,        8.212498e+307,        8.884366e+307, 
           7.653030e+307,        1.603133e+308,        1.571696e+308,        1.138210e+308, 
           5.254285e+307,        5.243482e+307,        4.413337e+307,        1.266201e+308, 
           1.392514e+308,        1.478879e+308,        1.449282e+308,        4.562023e+307, 
           1.439053e+308,        1.132023e+308,        4.161688e+307,        6.850591e+307, 
           8.147175e+307,        8.998525e+307,        9.717818e+307,        6.204651e+307, 
           5.239018e+307,        1.264729e+308,        1.679186e+308,        1.068144e+308, 
           1.066195e+308,        1.328012e+308,        6.698981e+307,        8.148410e+307, 
           9.157010e+307,        1.669537e+308,        8.103781e+307,        1.145912e+308, 
           8.257953e+307,        9.955165e+307,        7.412367e+306,        1.442113e+308, 
           1.207172e+308,        3.601275e+307,        2.622182e+306,        1.371938e+308, 
           1.020212e+308,        1.176076e+308,        1.141068e+308,        1.320100e+308, 
           1.595141e+308,        1.197100e+308,        2.169359e+307,        1.283078e+308, 
           8.039772e+307,        1.152290e+308,        1.166516e+308,        1.219511e+308, 
           1.057540e+307,        4.025992e+307,        3.019793e+307,        1.669211e+308, 
           9.262272e+307,        1.210501e+308,        1.200500e+308,        1.464426e+307, 
           4.046130e+307,        5.108850e+307,        1.642667e+308,        4.118543e+307, 
           4.469432e+307,        1.215763e+308,        1.165787e+308,        1.264995e+308, 
           1.504855e+308,        1.307454e+308,        3.493707e+306,        1.049397e+308, 
           1.655454e+308,        1.648089e+307,        9.969298e+307,        1.673298e+308, 
           3.585552e+307,        9.443634e+307,        2.278380e+307,        1.345982e+308, 
           5.656777e+307,        3.364817e+307,        1.762450e+308,        1.281444e+308, 
           1.484265e+308,        1.228220e+308,        1.239333e+308,        9.543519e+307, 
           3.395010e+307,        8.862910e+307,        1.005881e+308,        1.488994e+308, 
           3.646955e+307,        9.487258e+307,        1.452197e+308,        6.383688e+307, 
           9.846955e+307,        1.289733e+308,        3.640551e+307,        1.157277e+308, 
           1.600234e+304,        9.225347e+307,        1.024378e+308,        1.264983e+306, 
           1.604392e+308,        1.497826e+308,        1.393510e+308,        1.416826e+308, 
           6.716713e+307,        2.738102e+307,        6.332559e+307,        1.159688e+308, 
           1.675336e+308,        1.677626e+307,        1.328096e+308,        9.935375e+306, 
           1.361139e+308,        8.332116e+307,        8.090419e+306,        1.513711e+308, 
           2.961008e+307,        2.068676e+307,        4.881831e+307,        5.651701e+307, 
           1.089563e+308,        1.217877e+308,        1.775478e+308,        1.785578e+308, 
           1.361818e+308,        4.944728e+307,        1.715024e+308,        7.390000e+307, 
           3.894222e+307,        1.130983e+308,        2.672997e+306,        7.783973e+306, 
           3.240560e+307,        3.603747e+307,        1.293184e+308,        7.961400e+307, 
           1.519936e+308,        7.007230e+307,        1.505662e+308,        1.345427e+308, 
           1.049603e+308,        2.886621e+307,        9.506924e+307,        8.317403e+307, 
           6.823034e+307,        1.675989e+307,        4.658640e+307,        6.037312e+307, 
           6.743367e+307,        2.629300e+307,        5.694550e+307,        5.055570e+307, 
}; 


// End of File
