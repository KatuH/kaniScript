// ksmgr.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

void printCopyright() {
	_tprintf(_T("ksmgr.exe - KANI Script command line tool.\n"));
	_tprintf(_T("(C) Kazuya ISSAN(KatuH)\n"));
}

int _tmain() {

	printCopyright();

#ifdef _DEBUG
	getwchar();
#endif // _DEBUG
	return 0;
}
