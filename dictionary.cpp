#include "dictionary.h"

Dictionary::Dictionary():array_list(nullptr)
{

}
void readFile(const QString file_path)
{
    QFile file(file_path);
    if (!file.exists()) {
        QMessageBox::warning(this, "Cảnh báo", "Tệp " + file + " không tồn tại!");
        return 1;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Cảnh báo", "Không thể mở file: " + file.errorString());
        return 1;
    }
    QTextStream in(&file);
    in.setCodec("UTF-8");
    QString content = in.readAll();
    file.close();
}
