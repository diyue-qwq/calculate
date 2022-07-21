
// calculatorDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "afxdialogex.h"
#define pi 3.1415926535898//定义
#define std_angle (pi/180)

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalculatorDlg 对话框



CcalculatorDlg::CcalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
	, mStr(_T(""))
	, mStr1(_T(""))
	, mStr2(_T(""))
	, mStr3(_T(""))
	, mStr4(_T(""))
	, mStr5(_T(""))
	, mStr7(_T(""))
	, mStr8(_T(""))
	, mStr9(_T(""))
	, mStr10(_T(""))
	, mStr6(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, mStr);
	DDX_Text(pDX, IDC_EDIT2, mStr1);
	DDX_Text(pDX, IDC_EDIT3, mStr2);
	DDX_Text(pDX, IDC_EDIT4, mStr3);
	DDX_Text(pDX, IDC_EDIT5, mStr4);
	DDX_Text(pDX, IDC_EDIT6, mStr5);
	DDX_Text(pDX, IDC_EDIT7, mStr6);
	DDX_Text(pDX, IDC_EDIT8, mStr7);
	DDX_Text(pDX, IDC_EDIT9, mStr8);
	DDX_Text(pDX, IDC_EDIT10, mStr9);
	DDX_Text(pDX, IDC_EDIT11, mStr10);
}

BEGIN_MESSAGE_MAP(CcalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON4, &CcalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON17, &CcalculatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON21, &CcalculatorDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON25, &CcalculatorDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON37, &CcalculatorDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON1, &CcalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON10, &CcalculatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CcalculatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON16, &CcalculatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON19, &CcalculatorDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CcalculatorDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON27, &CcalculatorDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON22, &CcalculatorDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON26, &CcalculatorDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON24, &CcalculatorDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON23, &CcalculatorDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON36, &CcalculatorDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON40, &CcalculatorDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON38, &CcalculatorDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CcalculatorDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON34, &CcalculatorDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON28, &CcalculatorDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON31, &CcalculatorDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON15, &CcalculatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON29, &CcalculatorDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON32, &CcalculatorDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON14, &CcalculatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON30, &CcalculatorDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON33, &CcalculatorDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON12, &CcalculatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CcalculatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON18, &CcalculatorDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON35, &CcalculatorDlg::OnBnClickedButton35)
END_MESSAGE_MAP()


// CcalculatorDlg 消息处理程序

BOOL CcalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CcalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CcalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CcalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
void CcalculatorDlg::SaveFirstValue()//自拟1
{
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}
void CcalculatorDlg::Calculator()//自拟2,点击等于时调用
{
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);//因为此时符号没有显示，故输入栏只有第二个数
	double result = 0.0f;//定义结果值
	switch (mFlag)
	{
	case FLAG_JIA://加  
		result = mNum1 + mNum2;
		mTempStr = mTempStr + _T("+") + mStr + _T("=");
		break;
	case FLAG_JIAN:						//减 
		result = mNum1 - mNum2;
		mTempStr = mTempStr + _T("-") + mStr + _T("=");
		break;
	case FLAG_CHENG:					//乘  
		result = mNum1 * mNum2;
		mTempStr = mTempStr + _T("x") + mStr + _T("=");
		break;
	case FLAG_CHU:						//除  
		if (mNum2 == 0.0f)
		{
			result = mNum1;
			mTempStr = _T("---除数不能为0！！！---");//防止除数为0
		}
		else
		{
			result = mNum1 / mNum2;
			mTempStr = mTempStr + _T("/") + mStr + _T("=");
		}
		break;
	case FLAG_NFANG:					//n方
		result = pow(mNum1, mNum2);
		mTempStr = mTempStr + _T("^") + mStr + _T("=");
		break;
	case FLAG_KAINFANG:					//开n方
		result = pow(mNum1, 1.0 / mNum2);
		mTempStr = mStr + _T("√") + mTempStr + _T("=");
		break;
	case FLAG_MOD:						//mod
		result = (int)mNum1 % (int)mNum2;
		mTempStr = mTempStr + _T("%") + mStr + _T("=");
		break;
	case FLAG_LOGNX:					//lognx
		result = log(mNum2) / log(mNum1);
		mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T(")=");
		break;
	case FLAG_PINGFANG:					//平方 
		result = mNum2 * mNum2;
		mTempStr = mTempStr + _T("^2=");
		break;
	case FLAG_KAIFANG:	//开方  
		result = sqrt(mNum2);
		mTempStr = _T("2√") + mTempStr + _T("=");
		break;
	case FLAG_LIFANG:					//立方 
		result = mNum2 * mNum2 * mNum2;
		mTempStr = mTempStr + _T("^3=");
		break;
	case FLAG_KAILIFANG:					//开立方  
		result = pow(mNum2, 1.0 / 3);
		mTempStr = _T("3√") + mTempStr + _T("=");
		break;
	case FLAG_RECIPROCAL:           //倒数函数
		if (mNum1== 0.0f)
		{
			result = mNum1;
			mTempStr = _T("---除数不能为0！！！---");//防止除数为0
		}
		else {
			result = 1 / mNum1;
			mTempStr = _T("1/") + mTempStr + _T("=");
		}
		break;
	default:
		break;
	}
	//如果浮点数是个整数,就显示为整数
	if (result - int(result) <= 1e-5)
	{
		mStr.Format(L"%d", (int)result);//Fomat使数据转化为字符串
	}
	else
	{
		mStr.Format(L"%f", result);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);//递归更新历史记录

	mNum1 = result;//记录结果方便连续运算
	mNum2 = 0.0f;

}


int tod(CString m, int B) {//其他进制转十进制 
	int index = 0;//次方
	int result = 0;
	int length = m.GetLength();
	CString temp_num;
	int num = 0;
	while (length != 0) {
		temp_num = m.Right(1);//从右取数
		num = _ttoi(temp_num);
		result = result + num * pow(B, index);
		index += 1;
		length -= 1;
		m = m.Left(length);//从左开始取长为length的字符串
	}
	return result;
}
int htod(CString m) {//十六转十
	int index = 0;
	int result = 0;
	int length = m.GetLength();
	CString temp_num;
	int num = 0;//temp_num的运算帮手
	while (length != 0) {
		temp_num = m.Right(1);
		if (temp_num == "0") {
			num = 0;
		}
		else if (temp_num == "1") {
			num = 1;
		}
		else if (temp_num == "2") {
			num = 2;
		}
		else if (temp_num == "3") {
			num = 3;
		}
		else if (temp_num == "4") {
			num = 4;
		}
		else if (temp_num == "5") {
			num = 5;
		}
		else if (temp_num == "6") {
			num = 6;
		}
		else if (temp_num == "7") {
			num = 7;
		}
		else if (temp_num == "8") {
			num = 8;
		}
		else if (temp_num == "9") {
			num = 9;
		}
		else if (temp_num == "A") {
			num = 10;
		}
		else if (temp_num == "B") {
			num = 11;
		}
		else if (temp_num == "C") {
			num = 12;
		}
		else if (temp_num == "D") {
			num = 13;
		}
		else if (temp_num == "E") {
			num = 14;
		}
		else if (temp_num == "F") {
			num = 15;
		}
		
		result = result + num * pow(16, index);
		index += 1;
		length -= 1;
		m = m.Left(length);
	}
	return result;
}
int dto(int m, int B) {//十进制转B进制
	int index = 1;//每位权重（十的n次方）
	int result = 0;//假设结果初值为0
	int temp_result = 0;
	while (m != 0) {
		result = result + (m % B) * index;
		m = m / B;
		index *= 10;
	}
	return result;
}

CString dtoh(int m) {//十转十六
	CString result = _T("");
	int index = 0;
	int temp_result = 0;
	while (m != 0) {
		index = m % 16;
		switch (index)
		{
		case 0:
			result = _T("0") + result;//新的数加在前面
			break;
		case 1:
			result = _T("1") + result;
			break;
		case 2:
			result = _T("2") + result;
			break;
		case 3:
			result = _T("3") + result;
			break;
		case 4:
			result = _T("4") + result;
			break;
		case 5:
			result = _T("5") + result;
			break;
		case 6:
			result = _T("6") + result;
			break;
		case 7:
			result = _T("7") + result;
			break;
		case 8:
			result = _T("8") + result;
			break;
		case 9:
			result = _T("9") + result;
			break;
		case 10:
			result = _T("A") + result;
			break;
		case 11:
			result = _T("B") + result;
			break;
		case 12:
			result = _T("C") + result;
			break;
		case 13:
			result = _T("D") + result;
			break;
		case 14:
			result = _T("E") + result;
			break;
		case 15:
			result = _T("F") + result;
			break;
		default:
			break;
		}
		m = m / 16;
	}
	return result;
}
void CcalculatorDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '4';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '9';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_NFANG;
}





void CcalculatorDlg::OnBnClickedButton21()//二转十
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")2=");
	int result = tod(mStr, 2);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_BTD;
}


void CcalculatorDlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")16=");
	int result = htod(mStr);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_HTD;
}


void CcalculatorDlg::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("3√") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(mNum1, 1.0 / 3);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAILIFANG;
}




void CcalculatorDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '1';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '2';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '3';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '5';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '6';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '7';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '8';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '0';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = mStr + '.';
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHU;
}


void CcalculatorDlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!mStr.IsEmpty()) {
		mStr = mStr.Left(mStr.GetLength() - 1);//字符不为空则删除
	}
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton20()//删除所有
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mStr9 = L"";
	mStr10 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton27()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIA;//使结果值为0方便下一步计算
	UpdateData(FALSE);
}




void CcalculatorDlg::OnBnClickedButton22()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("(") + mStr + _T(")8=");
	int result = tod(mStr, 8);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")10");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_OTD;
}


void CcalculatorDlg::OnBnClickedButton26()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	mStr = dtoh((int)mNum1);
	mTempStr = mTempStr + _T("(") + mStr + _T(")16");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum2 = 0.0f;
	mFlag = FLAG_H;
}


void CcalculatorDlg::OnBnClickedButton24()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = dto((int)mNum1, 8);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")8");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_O;
}


void CcalculatorDlg::OnBnClickedButton23()//十转二
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("=");
	mNum1 = _wtof(mStr);
	int result = dto((int)mNum1, 2);
	double f = result;
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr = mTempStr + _T("(") + mStr + _T(")2");
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_B;
}


void CcalculatorDlg::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);

	if (_ttof(mStr) < 0)
		mTempStr = _T("---根号内不能为负数！！！---");//防止根号内为负数	
	else {
		mTempStr = _T("√") + mStr + _T("=");
		mNum1 = _wtof(mStr);
		double f = sqrt(mNum1);
		if (f - int(f) <= 1e-5) {
			mStr.Format(L"%d", (int)f);//若为整数，则以整型输出
		}
		else {
			mStr.Format(L"%f", f);
		}
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = 0.0f;
	mNum2 = 0.0f;
	mFlag = FLAG_KAIFANG;
	
}


void CcalculatorDlg::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^3=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LIFANG;
}


void CcalculatorDlg::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_KAINFANG;
}


void CcalculatorDlg::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("^2=");
	mNum1 = _wtof(mStr);
	double f = mNum1 * mNum1;
	//如果浮点数其实是个整数,就显示为整数
	if (f - int(f) <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
	{
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_PINGFANG;
}


void CcalculatorDlg::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = mStr + _T("!=");
	mNum1 = _wtof(mStr);
	double f = 1;
	int index = (int)mNum1;
	while (index > 0) {
		f *= index;
		index = index - 1;
	}
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_JIECHENG;

}


void CcalculatorDlg::OnBnClickedButton28()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("ln(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = log(mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_LNX;
}


void CcalculatorDlg::OnBnClickedButton31()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("sin(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_SINX;
}


void CcalculatorDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}


void CcalculatorDlg::OnBnClickedButton29()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_LOGNX;
}


void CcalculatorDlg::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("cos(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_COSX;
}


void CcalculatorDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}


void CcalculatorDlg::OnBnClickedButton30()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("e^") + mStr + _T("=");
	mNum1 = _wtof(mStr);
	double f = pow(2.71828182845, mNum1);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_EX;
}


void CcalculatorDlg::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("tan(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * std_angle) / cos(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_TANX;
}


void CcalculatorDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}


void CcalculatorDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIA;
}


void CcalculatorDlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_RECIPROCAL;
}




void CcalculatorDlg::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mTempStr = _T("cot(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = cos(mNum1 * std_angle) / sin(mNum1 * std_angle);
	if (f - int(f) <= 1e-5) {
		mStr.Format(L"%d", (int)f);
	}
	else {
		mStr.Format(L"%f", f);
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	UpdateData(FALSE);

	mNum1 = f;
	mNum2 = 0.0f;
	mFlag = FLAG_COTX;
}
