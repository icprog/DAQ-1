// SimpleRpcLibCPlus.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

//#include <string>

#include "SimpleRpcLibCPlus.h"

#using <System.Runtime.Remoting.dll>
#using <System.dll>

//using namespace System;

//#using "SimpleRpcLib.dll"  
//using namespace SimpleRpcLib;

//static Ksat::SimpleRpcLib::SingleClientApi^ gInstance = NULL;

void SetUrl(std::string host, int port, std::string backuphost)
{
	/*if (gInstance == NULL)
		gInstance = Ksat::SimpleRpcLib::SingleClientApi.Instance();
	this.Host = host;
	this.Port = port;*/
	System::String^ h = gcnew System::String(host.c_str());
	System::String^ bkh = gcnew System::String(backuphost.c_str());

	Ksat::SimpleRpcLib::SingleClientApi::Instance()->SetUrl(h, port, bkh);

}

int SendStationMessage(int machineid, int stationid, std::string value)
{
	printf("SendStationMessage()");

	System::String^ v = gcnew System::String(value.c_str());

	Ksat::SimpleRpcLib::ResponseEventArgs^ resp = Ksat::SimpleRpcLib::SingleClientApi::Instance()->SendMessage(machineid, stationid, v, System::String::Empty);

	return resp->ErrorCode;
}

int SendMessage(std::string action, std::string value)
{
	printf("SendMessage()");

	System::String^ act = gcnew System::String(action.c_str());
	System::String^ v = gcnew System::String(value.c_str());

	Ksat::SimpleRpcLib::ResponseEventArgs^ resp = Ksat::SimpleRpcLib::SingleClientApi::Instance()->SendAction(act, v);

	return resp->ErrorCode;
}


int TestApi()
{
	printf("TestApi()");
	return 0;
}
