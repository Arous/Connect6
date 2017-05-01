
// Connect6AiDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "global.h"


// CConnect6AiDlg ��ȭ ����
class CConnect6AiDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CConnect6AiDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONNECT6AI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// ���Ӻ�����
	CStatic m_imgBoard;
	CImage m_imgWstone;
	CImage m_imgBstone;



	bool m_turn;
	int m_turnCnt;
	int m_stoneCnt;
	int m_board[BOARDSIZE][BOARDSIZE];


	void initConnect6();


	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
