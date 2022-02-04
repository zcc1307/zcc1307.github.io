## CSC 588: Machine Learning Theory (Spring 2022)

This course provides an introduction to the theoretical aspects of machine learning. Students will
learn how and when machine learning is possible/impossible as well as various algorithms with
theoretical guarantees under minimal assumptions. Specifically, the course offers formulation of
learning environments (e.g., batch and online settings, stochastic and adversarial worlds with possibly limited feedback),
fundamental limits of learning in these environments, various algorithms concerning sample
efficiency, computational efficiency, and generality. Throughout, students will not only learn
fundamental tools upholding the current understanding of machine learning systems in the research
community but also develop skills of adapting these techniques to their own research needs such as
developing new algorithms for large-scale, data-driven applications.

### Logistics info

TuTh 9:30am-10:45am, Gould-Simpson 701

[Syllabus](syllabus.pdf)

[Piazza link](https://piazza.com/arizona/spring2022/csc588); please self-enroll. 

[Gradescope](https://www.gradescope.com/courses/354837) entry code: WYENZ3

[D2L course webpage](https://d2l.arizona.edu/d2l/home/1136821): lecture video recordings are at "UA Tools" -> "Zoom"


We will be using Piazza to make important announcements and do Q&As. Some general rules:

* If you have technical questions, try posing your questions as general as possible, to promote discussions among the class.
* If you have private questions, generally please make a private Piazza post instead of sending me an email - This will help facilitate my processing of your requests significantly.

[//]: # (
[Piazza link](https://piazza.com/arizona/fall2019/csc665) access code: CSC665-2
[D2L course webpage](https://d2l.arizona.edu/d2l/home/1012955): lecture video recordings can be found at "UA Tools" -> "Panopto"
)



### Instructor

[Chicheng Zhang](https://zcc1307.github.io/)

Gould-Simpson 720

Office Hour: Wednesdays 10-11am on Zoom (link in D2L page)

[//]: # (
Mondays 1-2pm (see D2L for meeting link) or by email appointment
)

### Textbook

There is no designated textbook for this course. Much of the course materials will be based on these books:

[Understanding machine learning: from theory to algorithms](https://www.cs.huji.ac.il/~shais/UnderstandingMachineLearning/) by Shai Shalev-Shwartz and Shai Ben-David (SSBD)

[A Modern Introduction to Online Learning](https://arxiv.org/pdf/1912.13213.pdf) by Francesco Orabona (O)

[Bandit algorithms](https://tor-lattimore.com/downloads/book/book.pdf) by Tor Lattimore and Csaba Szepesvari (LS)

[Reinforcement Learning: Theory and Algorithms](https://rltheorybook.github.io/rltheorybook_AJKS.pdf) by Alekh Agarwal, Nan Jiang, Sham Kakade, and Wen Sun (AJKS)

The following monographs and books also provide good coverage of relevant materials:

[Introduction to online optimization](https://ocobook.cs.princeton.edu/OCObook.pdf) by Elad Hazan

[Online learning and online convex optimization](https://www.cs.huji.ac.il/~shais/papers/OLsurvey.pdf) by Shai Shalev-Shwartz

[Regret analysis of stochastic and nonstochastic multi-armed bandit problems](http://sbubeck.com/SurveyBCB12.pdf) by Sebastien Bubeck and Nicolo Cesa-Bianchi

[Introduction to Multi-Armed Bandits](https://arxiv.org/pdf/1904.07272.pdf) by Alex Slivkins

### Review for prerequisites

Here are some excellent notes for [probability review](http://cs229.stanford.edu/section/cs229-prob.pdf) and [linear algebra review](http://cs229.stanford.edu/section/cs229-linalg.pdf) from Stanford's CS 229 course.

See also [The matrix cookbook](https://www.math.uwaterloo.ca/~hwolkowi/matrixcookbook.pdf), [The Probability and Statistics Cookbook](http://statistics.zone/), and [Calculus cheatsheet](https://tutorial.math.lamar.edu/pdf/calculus_cheat_sheet_all.pdf) (recommended by Prof. Kwang-Sung Jun).

This course has a theoretical / mathematical nature, so a large part of this course will be proof-based. For formal proof reading and writing, I recommend the book "How to Read and Do Proofs" by Daniel Solow. I also recommended watching the lecture [Street Fighting Mathematics](https://www.youtube.com/watch?v=qP4XEZ54eSc&list=PLm3J0oaFux3ZYpFLwwrlv_EHH9wtH6pnX&index=3) by Prof. Ryan O'Donnell for general introductions to approaching theory-ish problems.



### Scribing and LaTeX

We will be using the following [scribe note LaTeX template file](notes/scribe_template.tex) and [style file](notes/definitions.sty). See also [Prof. Rob Schapire's suggestions on preparing scribe notes](https://www.cs.princeton.edu/courses/archive/spring19/cos511/scribeinfo.html). Please sign up for one slot at the [signup sheet](https://docs.google.com/spreadsheets/d/1TT58oWjmrK673IrsYscz0my9bOn5A2fxUk1DqdZHGSk/edit?usp=sharing).

Useful LaTeX resources: [Learn LaTeX in 30 minutes by Overleaf](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#Adding_math_to_LaTeX); [Introduction to LATEX by MIT Research Science Institute](http://web.mit.edu/rsi/www/pdfs/new-latex.pdf)


### Machine learning courses at UA
[CSC 535 Probabilistic Graphical Models](http://kobus.ca/teaching/cs535/spring18/index.html) by Kobus Barnard

ISTA 457/INFO 557 Neural Networks by [Steven Bethard](https://bethard.faculty.arizona.edu/)

[CSC 665 Online Learning and Multi-armed Bandits](https://kwangsungjun.github.io/teach/20.1.csc665/index.html) by [Kwang-Sung Jun](https://kwangsungjun.github.io/)

[INFO 521 Introduction to Machine Learning](http://w3.sista.arizona.edu/~clayton/courses/ml/index.html) by Clayton Morrison

[CSC 665 Advanced Topics in Probabilistic Graphical Models](https://www2.cs.arizona.edu/~pachecoj/courses/csc665-1/index.html) by Jason Pacheco

[CSC 580 Principles of Machine Learning](https://cscheid.net/courses/spr19/csc665/) by Carlos Scheidegger

MIS 601 Statistical Foundations of Machine Learning by Junming Yin

[MATH 574M Statistical Machine Learning](http://math.arizona.edu/~hzhang/math574m.html) by Helen Zhang

[CSC 696H: Topics in Reinforcement Learning Theory](https://zcc1307.github.io/courses/csc696fa21/index.html) by Chicheng Zhang

### Learning theory courses at other institutions

There are many learning theory courses offered at other institutions. Many of them have good lecture materials and together offers a diverse set of perspectives of this field; here are just a few examples:

[Foundations of Machine Learning and Data Science](http://www.cs.cmu.edu/%7Eninamf/courses/806/10-806-index.html) by Nina Balcan and Avrim Blum

[Statistical Learning Theory](https://bcourses.berkeley.edu/courses/1409209/pages/lectures) by Peter Bartlett

[Topics in Learning Theory](http://www.cs.columbia.edu/~djhsu/coms6998-f17/) by Daniel Hsu

[Theoretical Machine Learning](https://www.cs.princeton.edu/courses/archive/spring18/cos511/schedule.html) by Rob Schapire

[Machine Learning Theory](http://mjt.cs.illinois.edu/courses/mlt-f18/) by Matus Telgarsky

[Learning Theory](https://ttic.uchicago.edu/~tewari/LT_SP2008.html) by Sham Kakade and Ambuj Tewari
