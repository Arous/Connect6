
// Connect6AiDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"
#include "global.h"


// CConnect6AiDlg 대화 상자
class CConnect6AiDlg : public CDialogEx
{
// 생성입니다.
public:
	CConnect6AiDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONNECT6AI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 게임보드판
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
