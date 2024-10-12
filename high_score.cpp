#include <iostream>
#include <string>
#include <fstream>

void score(std::string name,int score){

	const std::string high_scores_filename = "high_scores.txt";
	{
		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
		}

		out_file << name << ' ';
		out_file << score;
		out_file << std::endl;
	}
	{
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		int high_score = 0;
		while (true) {
			in_file >> username;
			in_file >> high_score;
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			std::cout << username << '\t' << high_score << std::endl;
		}
	}

    
};