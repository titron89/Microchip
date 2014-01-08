/**************************************************************
 * HTTPPrint.h
 * Provides callback headers and resolution for user's custom
 * HTTP Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 **************************************************************/

#ifndef __HTTPPRINT_H
#define __HTTPPRINT_H

#include "TCPIP Stack/TCPIP.h"

#if defined(STACK_USE_HTTP2_SERVER)

extern HTTP_STUB httpStubs[MAX_HTTP_CONNECTIONS];
extern BYTE curHTTPID;

void HTTPPrint(DWORD callbackID);
void HTTPPrint_scan(void);
void HTTPPrint_fwver(void);
void HTTPPrint_bssCount(void);
void HTTPPrint_ssid(void);
void HTTPPrint_nextSSID(void);
void HTTPPrint_prevSSID(void);
void HTTPPrint_prevWLAN(void);
void HTTPPrint_nextWLAN(void);
void HTTPPrint_curWLAN(void);
void HTTPPrint_curPrivacy(void);
void HTTPPrint_Demoversion(void);
void HTTPPrint_miwicmd(void);
void HTTPPrint_miwiscancnt(void);
void HTTPPrint_nodes(void);
void HTTPPrint_rooms(void);
void HTTPPrint_aplist(void);

void HTTPPrint(DWORD callbackID)
{
	switch(callbackID)
	{
        case 0x0000004a:
			HTTPPrint_scan();
			break;
        case 0x0000004b:
			HTTPPrint_fwver();
			break;
        case 0x0000004c:
			HTTPPrint_bssCount();
			break;
        case 0x0000005b:
			HTTPPrint_ssid();
			break;
        case 0x0000005c:
			HTTPPrint_nextSSID();
			break;
        case 0x0000005d:
			HTTPPrint_prevSSID();
			break;
        case 0x0000005e:
			HTTPPrint_prevWLAN();
			break;
        case 0x0000005f:
			HTTPPrint_nextWLAN();
			break;
        case 0x00000066:
			HTTPPrint_curWLAN();
			break;
        case 0x00000067:
			HTTPPrint_curPrivacy();
			break;
        case 0x00000068:
			HTTPPrint_Demoversion();
			break;
        case 0x00000075:
			HTTPPrint_miwicmd();
			break;
        case 0x00000076:
			HTTPPrint_miwiscancnt();
			break;
        case 0x00000077:
			HTTPPrint_nodes();
			break;
        case 0x00000078:
			HTTPPrint_rooms();
			break;
        case 0x00000079:
			HTTPPrint_aplist();
			break;
		default:
			// Output notification for undefined values
			TCPPutROMArray(sktHTTP, (ROM BYTE*)"!DEF", 4);
	}

	return;
}

void HTTPPrint_(void)
{
	TCPPut(sktHTTP, '~');
	return;
}

#endif

#endif