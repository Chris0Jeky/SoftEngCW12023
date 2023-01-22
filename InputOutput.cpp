namespace InputOutput {
    vector<string> split(const string& str, char delimiter) {
        vector<string> parts;
        string part;
        istringstream stream(str);
        while (getline(stream, part, delimiter)) {
            parts.push_back(part);
        }
        return parts;
    }

    void trim(string& str) {
        size_t first = str.find_first_not_of(' ');
        size_t last = str.find_last_not_of(' ');
        str = str.substr(first, (last - first + 1));
    }

    string getString(const string& message) {
        cout << message << ": ";
        string input;
        getline(cin, input);
        trim(input);
        return input;
    }

    double getDouble(const string& message) {
        while (true) {
            try {
                return stod(getString(message));
            } catch (const invalid_argument&) {
                cout << "Invalid input. Please enter a number." << endl;
            }
        }
    }

    int getInt(const string& message) {
        while (true) {
            try {
                return stoi(getString(message));
            } catch (const invalid_argument&) {
                cout << "Invalid input. Please enter an integer." << endl;
            }
        }
    }

    bool getBool(const string& message) {
      while (true) {
	string input = getString(message);
	if (input == "yes" || input == "Yes" || input == "YES" || input == "true" || input == "True" || input == "TRUE" || input == "1") {
	  return true;
	} else if (input == "no" || input == "No" || input == "NO" || input == "false" || input == "False" || input == "FALSE" || input == "0") {
	  return false;
	} else {
	  cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
	}
      }
    }
