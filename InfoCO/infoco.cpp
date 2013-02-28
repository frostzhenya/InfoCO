/*
*
*/

#include "infoco.h"
#include "CalcEx.h"
#include "List.h"
#include "Maps.h"
#include <QtCore/qtextcodec.h>
#include <QtGui/qmessagebox.h>

InfoCO::InfoCO(QWidget *parent, Qt::WFlags flags): QDialog(parent, flags)
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
		mBox.setText("��������� �������� ��� ����, ��� �� �� �������� �� ����� CO �� 100-200 ��� �� ����� � ��� �� �����.\n"
			"� ��� �� ������ ����� ����������: � ���-�� ����� ��� ��������� ������, ����������� ����� ���������� �����������,\n"
			"����� ��������� �������� ������, ����� � ���������� ���������� ������� � ������ ������.\n\n"
			"��������� �������� (�������) ������������� � ��������� ����� �� Qt 4.8.3 & c++.\n\n"
			"��� ���������� ���������� �������� ����� � ������. �����, ������� �������� ����, �������� �������!!!\n\n"
			"����� ���������: Lovepsone\n"
			"��������: GNU General Public License (GPL) V3.0\n\n"
			"���� � ������� ���������:\n"
			"- v 1.0.0 - ������� ���� ���������,� ������������� �����;\n"
			"- v 1.0.1 - �������� ������ <������ ��/�������/������>;\n"
			"- v 1.0.2 - ��������� ����������� �������������� �������;\n"
			"- v 1.0.3 - �������� ������ <�����>;\n"
			"- v 1.0.4 - �������� ������ <������ ��/�������/������>;\n"
			"\n"
			"����� �� ������� ���������:\n"
			"- ���������� ������ ������� <������ ��/�������/������> - ����������� � v 1.0.1;\n"
			"- ���������� ����������� ������������� ������ - ����������� � v 1.0.2;\n"
			"- ���������� ����������� ����������� ������;\n"
			"- ���������� ����������� ������ �� �������;\n"
			"- ���������� ������ ������� <�����> - ����������� � v 1.0.3;\n");
		mBox.exec();
		break;
	}
}

InfoCO::~InfoCO()
{

}
