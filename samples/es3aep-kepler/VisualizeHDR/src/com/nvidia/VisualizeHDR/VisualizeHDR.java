//----------------------------------------------------------------------------------
// File:        es3aep-kepler\VisualizeHDR\src\com\nvidia\VisualizeHDR/VisualizeHDR.java
// SDK Version: v3.00 
// Email:       gameworks@nvidia.com
// Site:        http://developer.nvidia.com/
//
// Copyright (c) 2014-2015, NVIDIA CORPORATION. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//----------------------------------------------------------------------------------
package com.nvidia.VisualizeHDR;

import android.app.NativeActivity;
import android.os.Bundle;
import android.util.Log;

import com.nvidia.NvAppBase.NvAppBase;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class VisualizeHDR extends NvAppBase
{
    @Override
    protected void onCreate (Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        Log.v("VisualizeHDR", "Calling subclass onCreate");
    }

    // Checking connected display for HDR compatibility
	public boolean JavaCallback_isDisplayHDRCompatible() throws IOException {
		try {
	        java.lang.Process p = Runtime.getRuntime().exec("getprop sys.hwc.hdr.supported");
	        BufferedReader in = new BufferedReader(
	                new InputStreamReader(p.getInputStream()));
	        String valueStr = in.readLine();
	        final int value = Integer.parseInt(valueStr);
	        if (value == 1)
	        	return true;	        
	    } catch (IOException e) {
	        e.printStackTrace();
		}		
		return false;
	}    
}
