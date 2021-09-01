## CSC 696H: Topics in Reinforcement Learning Theory (Fall 2021)

Reinforcement learning (RL) has achieved great empirical success over the past few decades, and has been used in many fields such as robotics, healthcare, game playing, etc. This course will study RL from a theoretical perspective: when and how can we design RL algorithms with provable guarantees? Specifically, we will look at recent theoretical advances in several representative RL problems, such as RL with a generative model; exploration in RL; RL with function approximation; policy optimization in RL; offline RL. In the first half of this course, students will learn the necessary mathematical tools (such as Markov Decision Processes, concentration inequalities, optimization tools) for the design and analysis of RL algorithms. In the second half of this course, each registered student will present a recent paper on RL theory. 

### Logistics info

Time and venue: TuTh 3:30pm-4:45pm, Cesar E. Chavez Building 305

[//]: # ([Gradescope](https://www.gradescope.com/courses/60240) entry code: GEPJNE)

[D2L course webpage](https://d2l.arizona.edu/d2l/home/1077605): lecture video recordings can be found at "UA Tools" -> "Panopto"

[Syllabus](syllabus.pdf)

We will be using Piazza to make important announcements and do Q&As. Please self-enroll [here](https://piazza.com/arizona/fall2021/csc696h002). Some general rules:

* If you have technical questions, try posing your questions as general as possible, so that it can promote discussions among the class.
* If you have private questions, unless necessary, please make a private Piazza post instead of sending me an email. This will help me process your requests much more efficiently.

### Instructor

[Chicheng Zhang](https://zcc1307.github.io/)

Office: Gould-Simpson 720

Office Hours: Thursdays 2-3pm, or by email appointment

### Textbook

Most of the lecture materials will be based on the book draft [Reinforcement Learning: Theory and Algorithms](https://rltheorybook.github.io/rltheorybook_AJKS.pdf), by Alekh Agarwal, Nan Jiang, Sham Kakade, and Wen Sun. 

Some additional useful materials:

[Reinforcement learning: an introduction](https://www.andrew.cmu.edu/course/10-703/textbook/BartoSutton.pdf) by Richard Sutton and Andrew Barto

[Algorithms of reinforcement learning](https://sites.ualberta.ca/~szepesva/rlbook.html) by Csaba Szepesvari 

[Bandit algorithms](https://tor-lattimore.com/downloads/book/book.pdf) by Tor Lattimore and Csaba Szepesvari

Markov Decision Processes: Discrete Stochastic Dynamic Programming by Martin Puterman 

[RL theory virtual seminars](https://sites.google.com/view/rltheoryseminars/home) by Gergely Neu, Ciara Pike-Burke, and Csaba Szepesvari

### Review for prerequisites

Here are some excellent notes for [probability review](http://cs229.stanford.edu/section/cs229-prob.pdf) and [linear algebra review](http://cs229.stanford.edu/section/cs229-linalg.pdf) from Stanford's CS 229 course.

I also recommended watching the lecture [Street Fighting Mathematics](https://www.youtube.com/watch?v=qP4XEZ54eSc&list=PLm3J0oaFux3ZYpFLwwrlv_EHH9wtH6pnX&index=3) by Ryan O'Donnell for general introductions to approaching theory-ish problems.

### Scribing and LaTeX
We will be using the following [scribe note LaTeX template file](notes/scribe_template.tex) and [style file](notes/definitions.sty). See also [Prof. Rob Schapire's suggestions on preparing scribe notes](https://www.cs.princeton.edu/courses/archive/spring19/cos511/scribeinfo.html). Please sign up for one scribing slot at the [sign up sheet](https://docs.google.com/spreadsheets/d/1rcYglBVxMDPwRKHS-H9AvYpfEZawrQYynfsuJp0Nv0U/edit?usp=sharing).

Some useful LaTeX resources: [Learn LaTeX in 30 minutes by Overleaf](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#Adding_math_to_LaTeX); [Introduction to LATEX by MIT Research Science Institute](http://web.mit.edu/rsi/www/pdfs/new-latex.pdf)


### Presentation 
All registered students will be asked to give a 60-min in-class presentation on an RL theory paper of their choice; please sign up for one presentation slot at the [sign up sheet](https://docs.google.com/spreadsheets/d/1rcYglBVxMDPwRKHS-H9AvYpfEZawrQYynfsuJp0Nv0U/edit?usp=sharing). See the [Presentation](presentation.html) page for more details. 

### Machine learning courses at UA
[CSC 696H: Advanced seminar on optimization and sampling](http://kobus.ca/teaching/cs696H/fall20/index.html) by Kobus Barnard

[CSC 535: Probabilistic Graphical Models](http://kobus.ca/teaching/cs535/spring18/index.html) by Kobus Barnard

ISTA 457/INFO 557: Neural Networks by Steven Bethard

[CSC 665: Online Learning and Multi-armed Bandits](https://kwangsungjun.github.io/teach/20.1.csc665/index.html) by Kwang-Sung Jun

[INFO 521: Introduction to Machine Learning](http://w3.sista.arizona.edu/~clayton/courses/ml/index.html) by Clayton Morrison

[CSC 665: Advanced Topics in Probabilistic Graphical Models](https://www2.cs.arizona.edu/~pachecoj/courses/csc665-1/index.html) by Jason Pacheco

[CSC 580: Principles of Machine Learning](https://cscheid.net/courses/spr19/csc665/) by Carlos Scheidegger

ECE523: Engineering Applications of Machine Learning and Data Analytics by Gregory Ditzler

MIS 601: Statistical Foundations of Machine Learning by Junming Yin

[MATH 574M: Statistical Machine Learning](http://math.arizona.edu/~hzhang/math574m.html) by Helen Zhang

[CSC 588: Machine Learning Theory](https://zcc1307.github.io/courses/csc588sp21/index.html) by Chicheng Zhang

### Reinforcement learning theory courses at other institutions

Many RL theory courses offered at other institutions have good lecture materials; these together offer a diverse set of perspectives of this field; here are a few examples:

[Bandits and RL](http://alekhagarwal.net/bandits_and_rl/) by Alekh Agarwal and Alex Slivkins

[Reinforcement Learning](https://ieor8100.github.io/rl/) by Shipra Agrawal

[Foundations of Reinforcement Learning](https://sites.google.com/view/cjin/ele524) by Chi Jin

[Statistical Reinforcement Learning](https://nanjiang.cs.illinois.edu/cs598/) by Nan Jiang

[Foundations of Reinforcement Learning](https://wensun.github.io/CS6789.html) by Wen Sun and Sham Kakade

[Theoretical Foundations of Reinforcement Learning](https://rltheory.github.io/pages/lectures/) by Csaba Szepesvari

[Reinforcement Learning](http://chercheurs.lille.inria.fr/~lazaric/Webpage/MVA-RL_Course16.html) by Alessandro Lazaric

### Useful reinforcement learning theory tutorials

[COLT 2021 Tutorial: Statistical Foundations of Reinforcement Learning](https://rltheorybook.github.io/colt21tutorial) by Akshay Krishnamurthy and Wen Sun

[AAAI 2020 and ALT 2019 Tutorials: Exploration-Exploitation in Reinforcement Learning](https://rlgammazero.github.io/) by Ronan Fruit, Mohammad Ghavamzadeh, Alessandro Lazaric, and Matteo Pirotta

[FOCS 2020 Tutorial: Theoretical Foundations of Reinforcement Learning](https://hunch.net/~tforl/) by Alekh Agarwal, Akshay Krishnamurthy, and John Langford

[ICML 2018 Tutorial: Optimization Perspectives on Learning to Control](https://people.eecs.berkeley.edu/~brecht/l2c-icml2018/) by Ben Recht