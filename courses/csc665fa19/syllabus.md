### CSC 665 Section 2: Machine Learning Theory: Syllabus

#### Description of Course
Designed mainly as an advanced (and more theoretically-oriented) version of CSC665 Principles of Machine Learning, students will learn, via the lens of mathematical foundations, how and when machine learning is possible/impossible as well as various algorithms with theoretical guarantees. Specifically, the course offers mathematical formulation of learning environments (e.g., stochastic and adversarial worlds with possibly limited feedback), fundamental limits of learning in these environments, various algorithms concerning sample efficiency, computational efficiency, and generality. Throughout, students will not only learn fundamental mathematical tools upholding the current understanding of machine learning systems in the research community but also develop skills of adapting these techniques to their own research needs such as developing new algorithms.


#### Course Prerequisites or Co-requisites

Linear Algebra or equivalent:

* You will need to understand the relationship between linear operators, linear transformations, and matrices

* We will make repeated use of matrix decompositions such as the SVD

Multivariate Calculus or equivalent:

* You will need to understand the relationship between the total derivative, the gradient, and how to take advantage of the fact that the derivative is a linear operator

Basic probability theory and statistics:

* You will need to understand (conditional) expectation and (conditional) independence of random variables.

* You will need to have basic concepts on concentration of measures.

You will need a basic programming skills for math such as matlab, julia, or python with numpy/scipy.


#### Instructor and Contact Information

[Chicheng Zhang](https://zcc1307.github.io/), GS 720, chichengz@cs.arizona.edu

Office hour: TBD; The instructor is also available by appointment.

D2L: <https://d2l.arizona.edu/d2l/home/824748>

#### Course Format and Teaching Methods
Lectures, individual assignments, written exams, projects, in-class discussions.

#### Course Objectives
A successful student will be able to explain the key learning theory concepts and analyze the lower and upper bounds of various machine learning tasks:

* PAC learning model
* VC dimension, Rademacher complexity
* Sample complexity bounds for finite classes and linear functions
* Boosting
* Support vector machine
* PAC-Bayes bounds, stability bounds
* Online classification and mistake bounds
* Online convex optimization, follow the regularized leader, online mirror descent.
* Online-to-batch conversion
* Online learning with limited feedback (multi-armed bandits)

For a more granular description of the learning objectives, see the week-by-week schedule and the description of the assignments below.

This course is far from a complete survey of the concurrent topics on machine learning theory due to the sheer volume of recent developments and the fact that those topics require a deep understanding of concepts and fluency in mathematical techniques. That said, this course covers key topics that not only serve as building blocks of advanced machine learning theory but is also relevant in modern research so that the students can directly adapt learned topics to their own research. Students are expected to dedicate a significant amount of time on understanding mathematical concepts and skills outside the classroom.

#### Expected Learning Outcomes
The expected learning outcomes of the course are:

* To be able to identify the factors that affect the performance of learning algorithms, including label noise, approximation error, optimization error, generalization error
* To be able to establish concentration between training and test losses by uniform convergence theory
* To be able to explain how the complexity/size of the hypothesis class can affect an algorithm’s generalization performance.
* To be able to explain overfitting/underfitting in mathematical language, and use the theory of structural risk minimization to perform model selection
* To be able to explain the role of margins in learning theory
* To be able to explain the difference between follow the regularized leader and online mirror descent, and derive basic regret guarantees of the two types of algorithms
* To be able to derive generalization bounds from online learning
* To be able to analyze optimization errors of learning algorithms, such as boosting and SVM

#### Absence and Class Participation Policy
The UA's policy concerning Class Attendance, Participation, and Administrative Drops is available at <http://catalog.arizona.edu/policy/class-attendance-participation-and-administrative-drop>. The UA policy regarding absences for any sincerely held religious belief, observance or practice(<http://policy.arizona.edu/human-resources/religious-accommodation-policy>) will be accommodated where reasonable. Absences pre approved by the UA Dean of Students (or dean’s designee) will be honored. See the dean of students's website(<https://deanofstudents.arizona.edu/absences>) for details.

#### Makeup Policy for Students Who Register Late
If you register late for this class, contact me as soon as you do. You will be expected to submit all missed assignments within a week of your registration. It is your responsibility to catch up to the class content.

#### Course Communications
We will use D2L for communications and discussion. Make sure your D2L account is up to date - class announcements are sent through the website.

#### Required Texts or Readings
The required textbook is “Understanding Machine Learning: From Theory to Algorithms” by Shai Shalev-Shwartz and Shai Ben-David, available at <https://www.cs.huji.ac.il/~shais/UnderstandingMachineLearning> for personal use.

#### Assignments and Examinations: Schedule/Due Dates
There will be a take-home midterm exam given out on 10/10 (Thu). For the final exam and the project, see the next section.

There will be a total of 7 programming/written assignments paced at around one assignment per week, skipping weeks for the midterm and final. Each assignment will be due at least one week after it is posted. The final project report is due on the last day of class.

* A0:    Calibration homework

* A1:    Concentration of measure; the PAC learning framework

* A2:    VC theory; Rademacher complexity

* A3:    Support vector machine; boosting

* A4:    Regularization and stability

* A5:    Project proposal
  *    The students submit a project proposal with 2-3 team members. The project is a maximum 4-page summary and comparison of 2-3 papers on a topic of interest, possibly including numerical experiments. The project progress is checked on Week 12.

* A6:    Online Convex Optimization

* A7:    Multi-armed bandits and linear bandits

#### Final Examination or Project
This course will have a comprehensive written open-book final examination, on 12/18 from 1pm-3pm at PAS 414. Information on the final exam
regulations and schedule:
<https://www.registrar.arizona.edu/courses/final-examination-regulations-and-information>
<http://www.registrar.arizona.edu/schedules/finals.htm>


#### Grading Scale and Policies
The instructing staff will grade your assignments, project, midterms, and the final exam on a scale from 0 to 100, with the following weights:
Assignments: 50%
Project: 15%
Midterm Exam: 15%
Final Exam: 20%

The final grade in the course of the best of a per-class grading curve and overall performance:
90% or better: A;
80% or better: B;
70% or better: C;
60% or better: D;
below 60%: F.

Graded homework will be returned before the next homework is due. The homework is due in 10 days, and will be returned to students before the next homework is due. Exams will be returned within two weeks. Grading delays beyond promised return-by dates will be announced as soon as possible with an explanation for the delay.

As a rule, homework will not be accepted late except in case of documented emergency or illness. You may petition the professor in writing for an exception if you feel you have a compelling reason for turning work in late.

Requests for incomplete (I) or withdrawal (W) must be made in accordance with University policies, which are available at <http://catalog.arizona.edu/policy/grades-and-grading-system#incomplete> and <http://catalog.arizona.edu/policy/grades-and-grading-system#Withdrawal>, respectively.
Dispute of Grade Policy: If you wish to dispute your grade for an assignment, midterm or project, you have two weeks after the grade has been turned in. In addition, even if only you dispute one portion of the grading for that unit, I reserve the right to revisit the entire unit (assignment, midterm, or project).


#### Scheduled Topics/Activities
See [Schedule](schedule.html) page for details.


#### Department of Computer Science Code of Conduct
The Department of Computer Science is committed to providing and maintaining a supportive educational environment for all.  We strive to be welcoming and inclusive, respect privacy and confidentiality, behave respectfully and courteously, and practice intellectual honesty.  Disruptive behaviors (such as physical or emotional harassment, dismissive attitudes, and abuse of department resources) will not be tolerated.  The complete Code of Conduct is available on our department web site.  We expect that you will adhere to this code, as well as the UA Student Code of Conduct, while you are a member of this class.

#### Classroom Behavior Policy
To foster a positive learning environment, students and instructors have a shared responsibility. We want a safe, welcoming, and inclusive environment where all of us feel comfortable with each other and where we can challenge ourselves to succeed. To that end, our focus is on the tasks at hand and not on extraneous activities (e.g., texting, chatting, reading a newspaper, making phone calls, web surfing, etc.).
Students are asked to refrain from disruptive conversations with people sitting around them during lecture. Students observed engaging in disruptive activity will be asked to cease this behavior. Those who continue to disrupt the class will be asked to leave lecture or discussion and may be reported to the Dean of Students.
Some learning styles are best served by using personal electronics, such as laptops and iPads. These devices can be distracting to other learners. Therefore, students who prefer to use electronic devices for note-taking during lecture should use one side of the classroom.

#### Threatening Behavior Policy
The UA Threatening Behavior by Students Policy prohibits threats of physical harm to any member of the University community, including to oneself. See <http://policy.arizona.edu/education-and-student-affairs/threatening-behavior-students>.

#### Notification of Objectionable Materials
This course will contain material of a mature nature, which may include explicit language, depictions of nudity, sexual situations, and/or violence. The instructor will provide advance notice when such materials will be used.  Students are not automatically excused from interacting with such materials, but they are encouraged to speak with the instructor to voice concerns and to provide feedback.

#### Accessibility and Accommodations
At the University of Arizona we strive to make learning experiences as accessible as possible. If you anticipate or experience physical or academic barriers based on disability or pregnancy, you are welcome to let me know so that we can discuss options.  You are also encouraged to contact Disability Resources (520-621-3268) to explore reasonable accommodation.
If our class meets at a campus location: Please be aware that the accessible table and chairs in this room should remain available for students who find that standard classroom seating is not usable.

#### Code of Academic Integrity
Students are encouraged to share intellectual views and discuss freely the principles and applications of course materials. However, graded work/exercises must be the product of independent effort unless otherwise instructed. Students are expected to adhere to the UA Code of Academic Integrity as described in the UA General Catalog. See <http://deanofstudents.arizona.edu/academic-integrity/students/academic-integrity>.
The University Libraries have some excellent tips for avoiding plagiarism, available at <http://new.library.arizona.edu/research/citing/plagiarism>.

#### UA Nondiscrimination and Anti-harassment Policy
The University is committed to creating and maintaining an environment free of discrimination; see <http://policy.arizona.edu/human-resources/nondiscrimination-and-anti-harassment-policy>.
Our classroom is a place where everyone is encouraged to express well-formed opinions and their reasons for those opinions. We also want to create a tolerant and open environment where such opinions can be expressed without resorting to bullying or discrimination of others.

#### Additional Resources for Students
UA Academic policies and procedures are available at <http://catalog.arizona.edu/policies>
Student Assistance and Advocacy information is available at <http://deanofstudents.arizona.edu/student-assistance/students/student-assistance>

#### Confidentiality of Student Records
Please see <http://www.registrar.arizona.edu/personal-information/family-educational-rights-and-privacy-act-1974-ferpa?topic=ferpa> for information on confidentiality of student records. This has concrete consequences for you if you give my name as a reference! In other words, if you intend to give my name as a reference, please contact me ahead of time so we can discuss.

#### Subject to Change Statement
Information contained in the course syllabus, other than the grade and absence policy, may be subject to change with advance notice, as deemed appropriate by the instructor.

#### Crisis Contacts
Where to go, who to call if you're in crisis:

* Located in Tucson? Call the Community-Wide Crisis Line 24 hours a day, 7 days a week at
520-622-6000.
* Are you a University of Arizona student? If it is not an emergency and you are a UA student,
call or walk-in to Counseling and Psych Services at 520-621-3334 Monday - Friday. Walk-in
triage is available between 9 am and 4 pm Monday - Friday.
* Are you a concerned friend? Concerned friends can find out more about helping a friend who
might be experiencing problems through our Friend 2 Friend website.

[Resources for sexual assault, relationship violence, and stalking.](https://health.arizona.edu/oasis-campus-and-community-resources)

24-Hour Hotlines:

  * The National Suicide Prevention Lifeline is a 24-hour, toll-free, confidential suicide prevention
hotline available to anyone in suicidal crisis or emotional distress. By dialing 1-800-273-TALK
(8255), the call is routed to the nearest crisis center in our national network of more than 150
crisis centers. The Lifeline’s national network of local crisis centers provides crisis counseling
and mental health referrals day and night.
  * Crisis Text Line: Text HOME to 741741 from anywhere in the United States, anytime, about
any type of crisis. A live, trained Crisis Counselor receives the text and responds, all from a
secure online platform. Find out more about how it works at crisistextline.org.

* Suicide Prevention for LGBTQ Youth through the Trevor Project:

  * The Trevor Lifeline is a 24/7 suicide hotline: 866-4-U-TREVOR (1-866-488-7386)
  * TrevorChat: Online instant messaging available 7 days a week, 3 pm - 10 pm ET (12
pm -- 7 pm PT)
  * TrevorText: Confidential and secure resource that provides live help for LGBTQ youth
with a trained specialist, over text messages. Text TREVOR to 1-202-304-1200
(available 7 days a week, 3 pm - 10 pm ET, 12 pm -- 7 pm PT)

* Veterans’ Suicide Prevention Lifeline: 1-800-273-TALK (1-800-273-8255)

* SAMHSA Treatment Referral Hotline (Substance Abuse): 1-800-662-HELP (1-800-662-4357)   

* National Sexual Assault Hotline: 1-800-656-HOPE (1-800-656-4673)

* Loveisrespect (National Dating Abuse Helpline): Call 1-866-331-9474 (TTY: 1-866-331-8453).

* Text LOVEIS to 22522 - you'll receive a response from a peer advocate prompting you for your
question. Go ahead and text your comment or question and we will reply.
