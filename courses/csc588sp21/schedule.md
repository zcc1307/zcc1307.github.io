### CSC 588: Machine Learning Theory - Spring 2021

#### Tentative schedule

|Date  | Topics | Scribe notes | Handwritten notes | Additional readings  | Homework |
|:---:|:------------:|:---:|:---:|:---:|:---:|
| Jan 14 | Introduction, motivation, course mechanics | | | SSBD App B.1 and B.2 | [HW0 (calibration)](hw/CSC_588_HW_0.pdf) |
| Jan 19  | The PAC learning framework; the consistency algorithm | [Scribe note](notes/0119.pdf) (Please feel free to make a copy of this as a starting point when scribing) | [Note 2](notes/lec2_handwritten.pdf) | SSBD Chap 2, Sec 3.1  |  |
| Jan 21  | Analysis of the consistency algorithm; agnostic PAC learning; Hoeffding's Inequality |  |  [Note 3](notes/lec3_handwritten.pdf) | SSBD Chap 2, Sec 3.1  |  |
| Jan 26  | Proof of Hoeffding's inequality; Bernstein's inequality | [Scribe note by Brian Toner](notes/0126.pdf) | [Note 4](notes/lec4_handwritten.pdf)  | SSBD B.4, B.5 |  |
| Jan 28  | Analysis of ERM; VC theory | [Scribe note by Alonso Granados](notes/0128.pdf)  | [Note 5](notes/lec5_handwritten.pdf) | SSBD Chap 4, Sec 6.1, 6.2 |  |
| Feb 2  | VC dimension examples; Sauer's Lemma | [Scribe note by Katherine Best](notes/0202.pdf)  | [Note 6](notes/lec6_handwritten.pdf) | SSBD Sec 6.2 - 6.5.1 | [HW1](hw/CSC_588_HW_1.pdf) |
| Feb 4  | Proof of Sauer's Lemma; VC dimension of composite hypothesis classes | [Scribe note by Marium Yousuf](notes/0204.pdf)  | [Note 7](notes/lec7_handwritten.pdf)  | SSBD Sec 6.2 - 6.5.1  | |
| Feb 9  | Uniform convergence via Rademacher complexity | [Scribe note by Brady Gales](notes/0209.pdf)   | [Note 8](notes/lec8_handwritten.pdf)  | SSBD Sec 6.5.2, 26.1, 28.1 | |
| Feb 11  | Proof of uniform convergence of VC classes | [Scribe note by Yinan Li](notes/0211.pdf)  | [Note 9](notes/lec9_handwritten.pdf) | SSBD Sec 6.5.2, 26.1, 28.1 | |
| Feb 16  | Lower bounds of PAC learning with VC classes; fundamental theorem of statistical learning | [Scribe note by Xiaolan Gu](notes/0216.pdf)   | [Note 10](notes/lec10_handwritten.pdf) | SSBD Sec 5.1 | |
| Feb 18  | Error decomposition in statistical learning; model selection | [Scribe note by Jie Bian](notes/0218.pdf)  | [Note 11](notes/lec11_handwritten.pdf) | SSBD Chap 7 |  |
| Feb 23  | Finish SRM; Adaboost and its training error analysis | [Scribe note by Yichen Li](notes/0223.pdf)  | [Note 12](notes/lec12_handwritten.pdf) | SSBD Chap 10 | |
| Feb 25  | No class - Reading day |  |  |  | |
| Mar 2  | Weak learnability implies "linear separability" through minimax theorem; Margin-based generalization error bounds for AdaBoost and linear classification | [Scribe note by Ryan Sullivant](notes/0302.pdf)   | [Note 13](notes/lec13_handwritten.pdf) | SSBD 26.1, 26.2, 26.4 | [HW2](hw/CSC_588_HW_2.pdf) |
| Mar 4  | Proof of margin-based generalization error bounds; Contraction inequality of Rademacher complexity; SVM formulations | [Scribe note by Ruby Abrams](notes/0304.pdf)  | [Note 14](notes/lec14_handwritten.pdf) | SSBD 26.3 | |
| Mar 9  | No class - Reading day |  |  |  | |
| Mar 11  | ell_2-norm-based margin bounds; Extensions of SVM; Regularized loss minimization formulations | [Scribe note by Shahriar Golchin](notes/0311.pdf)  | [Note 15](notes/lec15_handwritten.pdf) | SSBD 26.3; Chap 15; [Spectrally-normalized margin bounds for neural networks](https://arxiv.org/abs/1706.08498)  | | |
| Mar 16  | Stability, strong convexity, and regularization | [Scribe note by Adrienne Kinney](notes/0316.pdf)  | [Note 16](notes/lec16_handwritten.pdf)  | SSBD Chap 13  | | |
| Mar 18  | Stability-fitting tradeoff; online learning: definitions and examples | [Scribe note by Sarah Luca](notes/0318.pdf)  | [Note 17](notes/lec17_handwritten.pdf)  | SSBD Chap 13.4, O Chap 1, [Haipeng Luo's online learning lecture notes 1 (which this lecture is based heavily on)](https://haipeng-luo.net/courses/CSCI699/)  | |
| Mar 23  | Online to batch conversion; Azuma's Inequality; online gradient descent | [Scribe note by Sheldon Deeny](notes/0323.pdf)  | [Note 18](notes/lec18_handwritten.pdf) | O Chap 3, Chap 2 | |
| Mar 25 | Analysis of online gradient descent; Online mirror descent: basic definitions (class meeting cancelled; Pre-recorded lecture on Panopto) | [Scribe note by Caleb Dahlke](notes/0325.pdf)  | [Note 19](notes/lec19_handwritten.pdf) | O Chap 2, Sec 6.1-6.3 | |
| Mar 30  | Online mirror descent examples: p-norm, exponential weights; Fenchel conjugate | [Scribe note by Erik Wessel](notes/0330.pdf)  | [Note 20](notes/lec20_handwritten.pdf)  | O Theorem 2.19, 5.2.1, 6.4.1, 6.6, 6.7 | [HW3](hw/CSC_588_HW3.pdf) |
| Apr 1  | Online mirror descent analysis; Online learning odds & ends: unknown time horizon, lower bounds, Follow the Regularized Leader | [Scribe note by Yao Zhao](notes/0401.pdf)  | [Note 21](notes/lec21_handwritten.pdf) | O 6.4, 5.1, 7.1 | | |
| Apr 6  | Online gradient descent for strongly convex functions; kernel methods | [Scribe note by Zisu Wang](notes/0406.pdf)  | [Note 22](notes/lec22_handwritten.pdf) | SSBD 14.4.4, 14.5.3, 15.5, 16.2, 16.3 | |
| Apr 8  | Finish kernel methods; online Newton step for exp-concave functions  | [Scribe note by Robert Vacareanu](notes/0408.pdf)  | [Note 23](notes/lec23_handwritten.pdf)  | SSBD 16.3, O 7.9 | |
| Apr 13  | Finish online Newton step; begin multi-armed bandits (MAB) |  |  [Note 24](notes/lec24_handwritten.pdf) | LS Chap 4 |
| Apr 15  | Explore-then-commit; Upper confidence bound (UCB) algorithm and analysis | [Scribe note by Jesse Friedbaum](notes/0415.pdf)  | [Note 25](notes/lec25_handwritten.pdf) | LS Chap 6,7  | |
| Apr 20  | Finish UCB analysis; Adversarial MAB; EXP3 algorithm  | [Scribe note by Bohan Li](notes/0420.pdf)  | [Note 26](notes/lec26_handwritten.pdf) | LS Chap 11 | [HW4](hw/CSC_588_HW4.pdf) | |
| Apr 22  | Stochastic linear contextual bandits and the LinUCB/OFUL algorithm | [Scribe note by Dan Li](notes/0422.pdf)  | [Note 27](notes/lec27_handwritten.pdf) | LS Chap 19, 20 | |
| Apr 27  | Episodic MDPs, Optimistic Q-learning (based on the original [Optimistic Q-Learning paper](https://arxiv.org/abs/1807.03765) and [Haipeng Luo's lecture note](https://haipeng-luo.net/courses/CSCI699_2019/lecture10.pdf))  |  | [Note 28](notes/lec28_handwritten.pdf) (page 7 onwards will not appear in the exam)  | [Chi Jin's RL theory course notes](https://sites.google.com/view/cjin/ele524?authuser=0) [RL theory book by Alekh Agarwal, Nan Jiang, Sham Kakade, and Wen Sun](https://rltheorybook.github.io/rltheorybook_AJKS.pdf) | |
| Apr 29  | Project presentation I |  |  |  | |
| May 4  | Project presentation II |  |  |  | |


[//]: # (|Sep 26 | Structural risk minimization | | SSBD Chap 7 | |)
[//]: # (SSBD Chap 10, Sec 26.2)
[//]: # (|Oct 22 | Online classification | | SSBD Sec 21.1 | |)
[//]: # (|Oct 24 | Online convex optimization (OCO): online to batch conversion | | SSBD Sec 21.3, Sections 14.1-14.3  | |)
[//]: # (Follow the regularized leader (FTRL) | | H Sec 5.3 |)
[//]: # (Online mirror descent (OMD) | | H Sec 5.2 | |)
[//]: # (|Nov 5 | Online convex optimization for strongly-convex / exp-concave functions | | H Sec 3.3, Chap 4  | |
|Nov 7 | Prediction with expert advice (1) | | SSBD Sec 21.2 | |
|Nov 12 | Prediction with expert advice (2) | | | |
|Nov 14 | Stochastic multi-armed bandits (1) | | LS Chaps 6, 7 | |
|Nov 19 | Stochastic multi-armed bandits (2) | |  | |
|Nov 21 | Adversarial multi-armed bandits | | LS Chap 11 | |
LS Chap 19
|Dec 3 | Stochastic linear bandits (2) | | LS Chap 20 | |
|Aug 27 | Introduction, motivation, course mechanics | [slides](notes/slides.pdf) [probability review](notes/prob_review.pdf) | SSBD App B.1 and B.2 | HW0 |
|Aug 29 | Concentration of measure | [concentration of measure note 1](notes/conc_1.pdf) | SSBD App B.4 | |
|Sep 3  | Chernoff bound for Bernoulli random variables, McDiarmid's Inequality | [concentration of measure note 2](notes/conc_2.pdf) | SSBD App B.3, Lemma 26.4 | HW0 due in class |
|Sep 5  | The PAC learning framework, finite classes | [PAC learning note](notes/pac.pdf) | SSBD Chap 2, Sec 3.1 | |
|Sep 10 | Agnostic PAC learning, infinite classes | | SSBD Sec 3.2-3.3, Chap 4, Sec 6.1 | |
|Sep 12 | VC Theory, Sauer's Lemma | [VC Theory note](notes/vc.pdf) | SSBD Sec 6.2 - 6.5.1 |  |
|Sep 17 | Rademacher complexity | [Uniform convergence / Rademacher complexity note](notes/rad.pdf) | SSBD Sec 6.5.2, 26.1, 28.1 | HW1 |
|Sep 19 | Information-theoretic lower bounds of PAC learning |  | SSBD 28.2.1  | |
|Sep 24 | Le Cam's method |  | SSBD 28.2.1 | |
|Sep 26 | Assouad's method, fundamental theorem of statistical learning | [Lower bound note](notes/lower_bound.pdf) | SSBD Sec 28.2.2, Sec 5.1  | HW2 |
|Oct 1  | Support Vector Machine (SVM); the maximum margin hyperplane problem  | | SSBD Chap 15, Secs 26.2, 26.3 | |
|Oct 3  | Soft margin, nonlinear mapping, the dual of SVM  | | SSBD Sec 15.4 | |
|Oct 8  | Kernel trick | | SSBD Chap 16 | |
|Oct 10 | Margin bounds, generalization bounds of SVM | | SSBD Sec 26.3 | |
|Oct 15 | Proof of margin bounds via Rademacher complexity | [SVM note](notes/svm.pdf) | SSBD Secs 26.2, 26.4 | |
|Oct 17 | Model selection, structural risk minimization | [Model selection note](notes/model_sel.pdf) | SSBD Chap 7, [Modern bias-variance tradeoff](https://arxiv.org/pdf/1812.11118.pdf) | Midterm (take home) |
|Oct 22 | Boosting: AdaBoost | | SSBD Chap 10 | |
|Oct 24 | Boosting and margin bound; two styles of margin bounds | [Boosting note](notes/boosting.pdf) | SSBD Sec 26.2, [Boosted ResNet paper](https://arxiv.org/pdf/1706.04964.pdf) | |
|Oct 29 | Intro to Online learning; Online classification | | SSBD Sec 21.1 |  HW3 |
|Oct 31 | Minimax analysis: Littlestone's dimension; Expert problem | [Online classification note](notes/online_cls.pdf) | SSBD Sec 21.1.1 | |
|Nov 5 | Cover's Impossibility Result; Decision-theoretic online learning. | [Handwritten notes](notes/online_handwritten.pdf) | SSBD Sec 21.2 |  |
|Nov 7 | Hedge; Online to Batch conversion. | [Online to batch conversion notes](notes/online_to_batch.pdf) | SSBD Sec 21.2.1, [Hedge paper](http://rob.schapire.net/papers/FreundSc95.pdf); [Loss range adaptivity](https://arxiv.org/abs/1801.00101) | |
|Nov 12 | Convexity, subgradients | | SSBD Sec 12.1, 14.2 | |
|Nov 14 | Bregman divergence, norms, dual norms | | | |
|Nov 19 | Lipschitzness, strong convexity and smoothness | | SSBD Sec 12.1, 13.3 | HW4 |
|Nov 21 | Legendre-Fenchel conjugacy, online convex optimization, Follow the regularized leader (FTRL) | [OCO note](notes/oco.pdf) | Section 2.7, 2.3 of [Shalev-Shwartz's Survey](https://www.cs.huji.ac.il/~shais/papers/OLsurvey.pdf) | |
|Nov 26 | Analysis of FTRL; FTRL Examples | | H Sec 5.3 | |
|Nov 28 | No Class. Thanksgiving Holiday! | | | |
|Dec 3 | Online linear classification with margins; FTRL with Adaptive regularization | | Section 3.3 of [Shalev-Shwartz's Survey](https://www.cs.huji.ac.il/~shais/papers/OLsurvey.pdf); H Sec 5.6 | |
|Dec 5 | Adagrad, online optimization of strongly convex functions | | H Sec 3.3 | |
|Dec 10 | Final presentation | | | [Topics to review](notes/study_guide.pdf) |
)
