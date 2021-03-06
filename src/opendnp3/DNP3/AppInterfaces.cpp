//
// Licensed to Green Energy Corp (www.greenenergycorp.com) under one
// or more contributor license agreements. See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  Green Enery Corp licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
#include "AppInterfaces.h"

#include <opendnp3/APL/Configure.h>
#include <opendnp3/APL/Exception.h>

namespace apl
{
namespace dnp
{

void IAppUser::OnPartialResponse(const APDU&)
{
	throw Exception(LOCATION, "Unhandled frame");
}

void IAppUser::OnFinalResponse(const APDU&)
{
	throw Exception(LOCATION, "Unhandled frame");
}

void IAppUser::OnUnsolResponse(const APDU&)
{
	throw Exception(LOCATION, "Unhandled frame");
}

void IAppUser::OnRequest(const APDU&, SequenceInfo)
{
	throw Exception(LOCATION, "Unhandled frame");
}


void IAppUser::OnUnknownObject()
{
	throw Exception(LOCATION, "Unhandled frame");
}

}
} //end ns
