/*
*
*/

#include "infoco.h"
#include "CalcEx.h"
#include "List.h"
#include "Maps.h"
#include "quest.h"
#include <QtCore/qtextcodec.h>
#include <QtGui/qmessagebox.h>

InfoCO::InfoCO(QWidget *parent): QDialog(parent)
{
	ui.setupUi(this);

	QTextCodec *langcodec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForTr(langcodec);
	QTextCodec::setCodecForCStrings(langcodec);
	QTextCodec::setCodecForLocale(langcodec);

	connect(ui.MainAccept,SIGNAL(clicked()),this,SLOT(ChoiceDialog()));
}

void InfoCO::ChoiceDialog()
{
	QMessageBox mBox;
	CalcEx CalcForm;
	List listForm;
	Maps mapsForm;
	quest questForm;

	TypeOpt = ui.MainOptionBox->currentIndex();

	switch(TypeOpt)
	{
	case 0:
		CalcForm.exec();
		break;
	case 1:
		listForm.exec();
		break;
	case 2:
		mapsForm.exec();
		break;
	case 3:
		questForm.setGeometry(350,350,1,1);
		questForm.exec();
		break;
	case 4:
		mBox.setIconPixmap(QPixmap("img/InfoCO.png"));
		mBox.setText("��������� �������� ��� ����, ��� �� �� �������� �� ����� CO �� 100-200 ��� �� ����� � ��� �� �����.\n"
			"� ��� �� ������ ����� ����������: � ���-�� ����� ��� ��������� ������, ����������� ����� ���������� �����������,\n"
			"����� ��������� �������� ������, ����� � ���������� ���������� ������� � ������ ������.\n\n"
			"��������� �������� (�������) ������������� � ��������� ����� �� Qt 4.8.3 & c++.\n\n"
			"��� ���������� ���������� �������� ����� � ������. �����, ������� �������� ����, �������� �������!!!\n\n"
			"����� ���������: Lovepsone\n"
			"��������: GNU General Public License (GPL) V3.0\n\n"
			"������������, ������� �������� ��������� ������:\n"
			"Serjjj - ���� �������� ����� ���� ��� (���������� �������� ��� ��� ������ �����);\n"
			"������63 - ���� � �������������;\n"
			"Montrezor - ���������� ����� �� ��������;\n"
			"Grishkovec - �� ����� ���� �� �������, � ����� ����������� ���� ������;\n"
			"\n"
			"���� � ������� ���������:\n"
			"- v 1.0.0 - ������� ���� ���������,� ������������� �����;\n"
			"- v 1.0.1 - �������� ������ <������ ��/�������/������>;\n"
			"- v 1.0.2 - ��������� ����������� �������������� �������;\n"
			"- v 1.0.3 - �������� ������ <�����>;\n"
			"- v 1.0.4 - �������� ������ <������ ��/�������/������>;\n"
			"- v 1.0.5 - ��������a ����������� ������ �� �������, fix small bugs;\n"
			"- v 1.0.6 - �������� ����� ��� ��������� ����;\n"
			"- v 1.0.7 - ���������� ���� ������63, ������ ����������;\n"
			"- v 1.0.8 - ��������������� ���� � .png � ������������� ������������� �����;\n"
			"- v 2.0.0 - ���������� ������, �������� ������;\n"
			"\n"
			"����� �� ������� ���������:\n"
			"- ���������� ������ ������� <������ ��/�������/������> - ����������� � v 1.0.1;\n"
			"- ���������� ����������� ������������� ������ - ����������� � v 1.0.2;\n"
			"- ���������� ����������� ����������� ������;\n"
			"- ���������� ����������� ������ �� ������� - ����������� � v 1.0.5;\n"
			"- ���������� ������ ������� <�����> - ����������� � v 1.0.3;\n"
			"- ���������� ������ ������� <���� �� ���������>\n"
			"- ���������� ������ ������� <���������� �� �������> - ����������� � v 2.0.1;\n");
		mBox.exec();
		break;
	}
}

InfoCO::~InfoCO()
{

}
