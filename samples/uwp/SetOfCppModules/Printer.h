﻿// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once

using namespace Microsoft::Azure::IoT::Gateway;
using namespace Windows::Foundation::Collections;


namespace SetOfCppModules
{
	public ref class Printer sealed : IGatewayModule
    {
    public:
		Printer();

		// Inherited via IGatewayModule
		virtual void Create(Broker ^broker, IMapView<Platform::String^, Platform::String^>^ configuration);
		virtual void Destroy();
		virtual void Receive(Message ^received_message);
	};
}
