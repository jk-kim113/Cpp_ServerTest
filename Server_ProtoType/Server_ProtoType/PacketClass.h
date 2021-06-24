#pragma once
#include <iostream>
#include "MainServer.h"

class PacketClass
{
private:
	int _protocolID;
	int _castIdentifier;	// ������ �ε���
	int _uniqueUserIndex;	// ������ UUID
	int _dataSize;
	char* _data;
	char _dataPacket[1024];

public:
	PacketClass()
	{
		_protocolID = 0;
		_castIdentifier = -1;
		_uniqueUserIndex = -1;
		_dataSize = 0;
		_data = nullptr;
	}

	int _ProtocolID() {
		return _protocolID;
	}

	int _CastIdentifier() {
		return _castIdentifier;
	}

	char* _Data() {
		return _data;
	}

	int _DataSize() {
		return _dataSize;
	}

	void AccessServer(int protocolID, char* data, int dataSize, int castIdentifier);
	void EnrollUUID(int protocolID, char* data, int dataSize, int castIdentifier, int uuid);

	void CreatePacket(int toClientID, struct MainServer::P_StudentUUID p, int castIdentifier);
};
