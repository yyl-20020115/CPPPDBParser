#pragma once

#include "msf.h"

VOID TPIDumpTypes (PHDR pHdr);

const char *TPILookupTypeName (PHDR pHdr, ULONG typeIndex);
PlfRecord TPILookupTypeRecord (PHDR pHdr, ULONG typeIndex, ULONG *pdBase, ULONG *pdSize);
PHDR TPILoadTypeInfo (MSF *msf);
const char* TPIGetSymbolDeclaration (PHDR pHdr, const char *szTypeName, const char *szVarName);
VOID TPIDumpTypes (PHDR pHdr);
VOID TPIFreeTypeInfo (MSF* msf, PHDR hdr);
