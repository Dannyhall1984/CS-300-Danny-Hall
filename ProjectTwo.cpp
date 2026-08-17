// Compares course numbers for alphanumeric sorting
bool compareCourses(const Course& a, const Course& b) {
	return a.courseNumber < b.courseNumber;
}

// Sorts and prints all courses in alphanumeric order
void printCourseList(vector<Course> courses) {
	// Sort courses by course number from lowest to highest
	sort(courses.begin(), courses.end(), compareCourses);

	cout << "Here is a sample schedule:" << endl;

	// Display each course number and title
	for (const Course& course : courses) {
		cout << course.courseNumber << ", " << course.courseTitle << endl;
	}
}
