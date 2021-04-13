### CSC 588: Machine Learning Theory - Spring 2021

#### Tentative schedule

|Date  | Topics | Scribe notes | Handwritten notes | Additional readings  | Homework |
|:---:|:------------:|:---:|:---:|:---:|:---:|
| Jan 14 | Introduction, motivation, course mechanics | | | SSBD App B.1 and B.2 | [HW0 (calibration)](hw/CSC_588_HW_0.pdf) |
| Jan 19  | The PAC learning framework; the consistency algorithm | [Scribe note (0119/)](https://www.overleaf.com/read/cjdpjbhwhpcx) (Please feel free to make a copy of this as a starting point when scribing) | [Note 2](notes/lec2_handwritten.pdf) | SSBD Chap 2, Sec 3.1  |  |
| Jan 21  | Analysis of the consistency algorithm; agnostic PAC learning; Hoeffding's Inequality |  |  [Note 3](notes/lec3_handwritten.pdf) | SSBD Chap 2, Sec 3.1  |  |
| Jan 26  | Proof of Hoeffding's inequality; Bernstein's inequality | [Scribe note (0126/) by Brian Toner](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 4](notes/lec4_handwritten.pdf)  | SSBD B.4, B.5 |  |
| Jan 28  | Analysis of ERM; VC theory | [Scribe note (0128/) by Alonso Granados](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 5](notes/lec5_handwritten.pdf) | SSBD Chap 4, Sec 6.1, 6.2 |  |
| Feb 2  | VC dimension examples; Sauer's Lemma | [Scribe note (0202/) by Katherine Best](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 6](notes/lec6_handwritten.pdf) | SSBD Sec 6.2 - 6.5.1 | [HW1](hw/CSC_588_HW_1.pdf) |
| Feb 4  | Proof of Sauer's Lemma; VC dimension of composite hypothesis classes | [Scribe note (0204/) by Marium Yousuf](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 7](notes/lec7_handwritten.pdf)  | SSBD Sec 6.2 - 6.5.1  | |
| Feb 9  | Uniform convergence via Rademacher complexity | [Scribe note (0209/) by Brady Gales](https://www.overleaf.com/read/cjdpjbhwhpcx)  | [Note 8](notes/lec8_handwritten.pdf)  | SSBD Sec 6.5.2, 26.1, 28.1 | |
| Feb 11  | Proof of uniform convergence of VC classes | [Scribe note (0211/) by Yinan Li](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 9](notes/lec9_handwritten.pdf) | SSBD Sec 6.5.2, 26.1, 28.1 | |
| Feb 16  | Lower bounds of PAC learning with VC classes; fundamental theorem of statistical learning | [Scribe note (0216/) by Xiaolan Gu](https://www.overleaf.com/read/cjdpjbhwhpcx)  | [Note 10](notes/lec10_handwritten.pdf) | SSBD Sec 5.1 | |
| Feb 18  | Error decomposition in statistical learning; model selection | [Scribe note (0218/) by Jie Bian](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 11](notes/lec11_handwritten.pdf) | SSBD Chap 7 |  |
| Feb 23  | Finish SRM; Adaboost and its training error analysis | [Scribe note (0223/) by Yichen Li](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 12](notes/lec12_handwritten.pdf) | SSBD Chap 10 | |
| Feb 25  | No class - Reading day |  |  |  | |
| Mar 2  | Weak learnability implies "linear separability" through minimax theorem; Margin-based generalization error bounds for AdaBoost and linear classification | [Scribe note (0302/) by Ryan Sullivant](https://www.overleaf.com/read/cjdpjbhwhpcx)  | [Note 13](notes/lec13_handwritten.pdf) | SSBD 26.1, 26.2, 26.4 | [HW2](hw/CSC_588_HW_2.pdf) |
| Mar 4  | Proof of margin-based generalization error bounds; Contraction inequality of Rademacher complexity; SVM formulations | [Scribe note (0304/) by Ruby Abrams](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 14](notes/lec14_handwritten.pdf) | SSBD 26.3 | |
| Mar 9  | No class - Reading day |  |  |  | |
| Mar 11  | ell_2-norm-based margin bounds; Extensions of SVM; Regularized loss minimization formulations | [Scribe note (0311/) by Shahriar Golchin](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 15](notes/lec15_handwritten.pdf) | SSBD 26.3; Chap 15; [Spectrally-normalized margin bounds for neural networks](https://arxiv.org/abs/1706.08498)  | | |
| Mar 16  | Stability, strong convexity, and regularization | [Scribe note (0316/) by Adrienne Kinney](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 16](notes/lec16_handwritten.pdf)  | SSBD Chap 13  | | |
| Mar 18  | Stability-fitting tradeoff; online learning: definitions and examples | [Scribe note (0318/) by Sarah Luca](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 17](notes/lec17_handwritten.pdf)  | SSBD Chap 13.4, O Chap 1, [Haipeng Luo's online learning lecture notes 1 (which this lecture is based heavily on)](https://haipeng-luo.net/courses/CSCI699/)  | |
| Mar 23  | Online to batch conversion; Azuma's Inequality; online gradient descent | [Scribe note (0323/) by Sheldon Deeny](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 18](notes/lec18_handwritten.pdf) | O Chap 3, Chap 2 | |
| Mar 25 | Analysis of online gradient descent; Online mirror descent: basic definitions (class meeting cancelled; Pre-recorded lecture on Panopto) | [Scribe note (0325/) by Caleb Dahlke](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 19](notes/lec19_handwritten.pdf) | O Chap 2, Sec 6.1-6.3 | |
| Mar 30  | Online mirror descent examples: p-norm, exponential weights; Fenchel conjugate | [Scribe note (0330/) by Erik Wessel](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 20](notes/lec20_handwritten.pdf)  | O Theorem 2.19, 5.2.1, 6.4.1, 6.6, 6.7 | [HW3](hw/CSC_588_HW3.pdf) |
| Apr 1  | Online mirror descent analysis; Online learning odds & ends: unknown time horizon, lower bounds, Follow the Regularized Leader | [Scribe note (0401/) by Yao Zhao](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 21](notes/lec21_handwritten.pdf) | O 6.4, 5.1, 7.1 | | |
| Apr 6  | Online gradient descent for strongly convex functions; kernel methods | [Scribe note (0406/) by Zisu Wang](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 22](notes/lec22_handwritten.pdf) | SSBD 14.4.4, 14.5.3, 15.5, 16.2, 16.3 | |
| Apr 8  | Finish kernel methods; online Newton step for exp-concave functions  | [Scribe note (0408/) by Robert Vacareanu](https://www.overleaf.com/read/cjdpjbhwhpcx) | [Note 23](notes/lec23_handwritten.pdf)  | SSBD 16.3, O 7.9 | |
| Apr 13  | Finish online Newton step; begin multi-armed bandits |  |  [Note 24](notes/lec24_handwritten.pdf) | LS Chap 4 |
| Apr 15  |  |  |  |  | |
| Apr 20  | linear bandits, MDPs  |  | |  |  | |
| Apr 22  |  |  |  |  | |
| Apr 27  |  |  |  |  | |
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
