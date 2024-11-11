#include "dictionary.h"

Dictionary::Dictionary():array_list(nullptr)
{

}
void readFile(const QString file_path)
{
    QFile file(file_path);
    if (!file.exists()) {
        QMessageBox::warning(nullptr, "Cảnh báo", "Tệp " + file_path + " không tồn tại!");
        return ;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Cảnh báo", "Không thể mở file: " + file.errorString());
        return ;
    }
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    QString content = in.readAll();
    file.close();
}
