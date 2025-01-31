import QtQuick
import QtQuick.Controls

Window {
	id: root
	width: 640
	height: 480
	visible: true
	title: qsTr("AO Evrika")

	Button{
		text: "Открыть диалог"
		anchors.centerIn: parent

		onClicked: {
			dialog.open()
		}
	}

	Dialog{
		id: dialog
		width: 300
		height: width
		anchors.centerIn: parent

		Button{
			text: "Создать текстовый файл"
			anchors.centerIn: parent

			onClicked: {
				_backend.createTextFile()

				root.close()
			}
		}
	}

}
