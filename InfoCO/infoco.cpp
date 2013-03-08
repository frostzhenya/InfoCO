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
		mBox.setText("Программа написана для того, что бы не заходить на форум CO по 100-200 раз за одной и той же инфой.\n"
			"В ней вы можете найти информацию: о кол-ве опыта для повышение уровня, просмотреть какие существуют группировки,\n"
			"каким сталкерам доверять нельзя, карты с некоторыми указанными точками и многое другое.\n\n"
			"Программа писалась (пишется) исключительно в обучающих целях на Qt 4.8.3 & c++.\n\n"
			"Вся информация касательно сталкера взята с форума. Людям, которые выложили инфу, огромное спасибо!!!\n\n"
			"Автор программы: Lovepsone\n"
			"Лицензия: GNU General Public License (GPL) V3.0\n\n"
			"Пользователи, которые помогают развивать проект:\n"
			"Serjjj - идея создания проги была его (фактически писалась она для нашего клана);\n"
			"Феникс63 - идея с калькулятором;\n"
			"Montrezor - представил карту со схронами;\n"
			"Grishkovec - за новые идеи со списком, а также предоставил свой список;\n"
			"\n"
			"Инфа о версиях программы:\n"
			"- v 1.0.0 - Создана сама программа,с калькулятором опыта;\n"
			"- v 1.0.1 - Добавлен раздел <Списки ПК/Кидалов/Кланов>;\n"
			"- v 1.0.2 - Добавлена возможность редактирования списков;\n"
			"- v 1.0.3 - Добавлен раздел <Карты>;\n"
			"- v 1.0.4 - Обновлен раздел <Списки ПК/Кидалов/Кланов>;\n"
			"- v 1.0.5 - Добавленa возможность поиска по спискам, fix small bugs;\n"
			"- v 1.0.6 - Иправлен вылет при просмотре карт;\n"
			"- v 1.0.7 - Реализация идеи Феникс63, правки орфографии;\n"
			"- v 1.0.8 - Конвертирование карт в .png и Реконструкция относительных путей;\n"
			"- v 2.0.0 - Стабильная версия, включены иконки;\n"
			"\n"
			"Планы на будущее программы:\n"
			"- Добавление нового раздела <Списки ПК/Кидалов/Кланов> - реализовано в v 1.0.1;\n"
			"- Добавление возможности редактировать списки - реализовано в v 1.0.2;\n"
			"- Добавление возможности сортировать списки;\n"
			"- Добавление возможности поиска по спискам - реализовано в v 1.0.5;\n"
			"- Добавление нового раздела <Карты> - реализовано в v 1.0.3;\n"
			"- Добавление нового раздела <Инфа по торговцам>\n"
			"- Добавление нового раздела <Информация по квестам> - реализовано в v 2.0.1;\n");
		mBox.exec();
		break;
	}
}

InfoCO::~InfoCO()
{

}
