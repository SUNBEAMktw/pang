#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;			using std::setprecision;
using std::cout;		using std::string;
using std::endl;		using std::streamsize;

int main()
{
	// 학생의 이름을 물을 것
	cout << "이름을 알려주세요: ";
	string name;
	cin >> name;
	cout << "안녕하세요, " << name << " 씨!" << endl;

	// 중간 및 기말 성적을 물을 것
	cout << "중간 및 기말 성적을 알려주세요: ";
	double midterm, final;
	cin >> midterm >> final;

	// 과제 성적을 물을 것
	cout << "과제 성적을 전부 알려주세요. "
		"입력이 끝나면 end-of-file: ";

	// 지금까지 읽은 성적의 개수와 합
	int count = 0;
	double sum = 0;

	// 읽어 들일 변수
	double x;

	// 불변조건:
	// 지금까지 읽은 성적 개수,
	// sum은 성적을 합한 값
	while (cin >> x) {
		++count;
		sum += x;
	}

	// 결과 표시
	streamsize prec = cout.precision();
	cout << "당신의 최종 성적은 " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	return 0;
}
