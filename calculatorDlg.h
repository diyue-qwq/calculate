
// calculatorDlg.h: 头文件
//

#pragma once

enum Calculator_Flag {
	FLAG_JIA,
	FLAG_JIAN,
	FLAG_CHENG,
	FLAG_CHU,
	FLAG_PINGFANG,
	FLAG_KAIFANG,
	FLAG_LIFANG,
	FLAG_KAILIFANG,
	FLAG_NFANG,
	FLAG_KAINFANG,
	FLAG_HTD,
	FLAG_OTD,
	FLAG_BTD,
	FLAG_H,
	FLAG_O,
	FLAG_B,
	FLAG_JIECHENG,
	FLAG_MOD,
	FLAG_LNX,
	FLAG_LOGNX,
	FLAG_EX,
	FLAG_SINX,
	FLAG_COSX,
	FLAG_TANX,
	FLAG_RECIPROCAL,
	FLAG_COTX,
};

// CcalculatorDlg 对话框
class CcalculatorDlg : public CDialogEx
{
// 构造
public:
	CcalculatorDlg(CWnd* pParent = nullptr);	// 标准构造函数
	void SaveFirstValue();		//保存第一个输入值
	void Calculator();			//计算

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	
public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton37();
	CString mStr;
	CString mStr1;
	CString mStr2;
	CString mStr3;
	CString mStr4;
	CString mStr5;
	CString mStr7;
	CString mStr8;
	CString mStr9;
	CString mStr10;
	CString mStr6;
	CString mTempStr;
	double mNum1;				//输入的2个值
	double mNum2;
	Calculator_Flag mFlag;		//运算符号
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton35();
};
