#include <iostream>
#include <sstream>

class Report {
public:
    std::string title;
    std::string data;

    Report(const std::string& t, const std::string& d) : title(t), data(d) {}
};
//take out side class

class ReportProcessor{
public:
    static int process(const Report& report) {
        std::istringstream iss(report.data);
        int number, sum = 0;
        while (iss >> number) {
            sum += number;
        }
        return sum;
    }
};
class ReportFormat{
	public:
    static std::string format(const Report& report) {
		//int result = processData(report)
        return "<h1>" + report.title + "</h1>\n<p>" + report.title + ": " + std::to_string(processData(report)) + "</p>";
    }



// Included for demonstration
int main() {
    Report report("Total sales", "51 42 39 60");
    std::cout << ReportFormatter::format(report);
}
