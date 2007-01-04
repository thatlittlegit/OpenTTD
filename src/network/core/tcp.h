/* $Id$ */

#ifndef NETWORK_CORE_TCP_H
#define NETWORK_CORE_TCP_H

#ifdef ENABLE_NETWORK

#include "os_abstraction.h"
#include "packet.h"

/**
 * @file tcp.h Basic functions to receive and send TCP packets.
 */

/**
 * Enum with all types of UDP packets.
 * The order of the first 4 packets MUST not be changed, as
 * it protects old clients from joining newer servers
 * (because SERVER_ERROR is the respond to a wrong revision)
 */
enum {
	PACKET_SERVER_FULL,
	PACKET_SERVER_BANNED,
	PACKET_CLIENT_JOIN,
	PACKET_SERVER_ERROR,
	PACKET_CLIENT_COMPANY_INFO,
	PACKET_SERVER_COMPANY_INFO,
	PACKET_SERVER_CLIENT_INFO,
	PACKET_SERVER_NEED_PASSWORD,
	PACKET_CLIENT_PASSWORD,
	PACKET_SERVER_WELCOME,
	PACKET_CLIENT_GETMAP,
	PACKET_SERVER_WAIT,
	PACKET_SERVER_MAP,
	PACKET_CLIENT_MAP_OK,
	PACKET_SERVER_JOIN,
	PACKET_SERVER_FRAME,
	PACKET_SERVER_SYNC,
	PACKET_CLIENT_ACK,
	PACKET_CLIENT_COMMAND,
	PACKET_SERVER_COMMAND,
	PACKET_CLIENT_CHAT,
	PACKET_SERVER_CHAT,
	PACKET_CLIENT_SET_PASSWORD,
	PACKET_CLIENT_SET_NAME,
	PACKET_CLIENT_QUIT,
	PACKET_CLIENT_ERROR,
	PACKET_SERVER_QUIT,
	PACKET_SERVER_ERROR_QUIT,
	PACKET_SERVER_SHUTDOWN,
	PACKET_SERVER_NEWGAME,
	PACKET_SERVER_RCON,
	PACKET_CLIENT_RCON,
	PACKET_END                   ///< Must ALWAYS be on the end of this list!! (period)
};

void NetworkSend_Packet(Packet *packet, NetworkClientState *cs);
Packet *NetworkRecv_Packet(NetworkClientState *cs, NetworkRecvStatus *status);
bool NetworkSend_Packets(NetworkClientState *cs);

#endif /* ENABLE_NETWORK */

#endif /* NETWORK_CORE_TCP_H */
