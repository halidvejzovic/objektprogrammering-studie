const generateBtn =
document.getElementById("generateBtn");

const quizContainer =
document.getElementById("quizContainer");

const loading =
document.getElementById("loading");

let questions = [];
let currentQuestion = 0;
let score = 0;

generateBtn.addEventListener(
    "click",
    generateQuiz
);

function generateQuiz()
{
    questions = [

        {
            question: ".NET SDK står för?",

            answers: [
                "Software Development Kit",
                "System Development Kernel",
                "Server Development Kit",
                "Source Development Key"
            ],

            correct: 0,

            explanation:
            ".NET SDK betyder Software Development Kit och innehåller verktyg för att utveckla .NET-applikationer."
        },

        {
            question: "Vad används ett API till?",

            answers: [
                "Att låta program kommunicera",
                "Att installera Windows",
                "Att skapa databaser",
                "Att skriva CSS"
            ],

            correct: 0,

            explanation:
            "Ett API används för att olika program ska kunna kommunicera med varandra."
        }

    ];

    currentQuestion = 0;
    score = 0;

    showQuestion();
}

function showQuestion()
{
    const q = questions[currentQuestion];

    quizContainer.innerHTML = "";

    const title =
    document.createElement("h2");

    title.textContent =
    q.question;

    quizContainer.appendChild(title);

    q.answers.forEach((answer,index)=>{

        const btn =
        document.createElement("button");

        btn.textContent =
        answer;

        btn.classList.add(
            "alternative"
        );

        btn.addEventListener(
            "click",
            ()=>checkAnswer(index)
        );

        quizContainer.appendChild(btn);
    });
}

function checkAnswer(index)
{
    const q =
    questions[currentQuestion];

    const buttons =
    document.querySelectorAll(
        ".alternative"
    );

    buttons.forEach(btn => {
        btn.disabled = true;
    });

    const explanation =
    document.createElement("div");

    explanation.classList.add(
        "explanation"
    );

    if(index === q.correct)
    {
        score++;

        explanation.innerHTML =
        `
        <h3>Rätt ✅</h3>
        <p>${q.explanation}</p>
        `;
    }
    else
    {
        explanation.innerHTML =
        `
        <h3>Fel ❌</h3>

        <p>
        Rätt svar:
        ${q.answers[q.correct]}
        </p>

        <p>
        ${q.explanation}
        </p>
        `;
    }

    quizContainer.appendChild(
        explanation
    );

    const nextBtn =
    document.createElement("button");

    nextBtn.textContent =
    "Nästa fråga";

    nextBtn.addEventListener(
        "click",
        ()=>{

            currentQuestion++;

            if(currentQuestion <
            questions.length)
            {
                showQuestion();
            }
            else
            {
                showResult();
            }

        }
    );

    quizContainer.appendChild(
        nextBtn
    );
}

function showResult()
{
    const percent =
    Math.round(
        score / questions.length * 100
    );

    quizContainer.innerHTML =
    `
    <div class="result">

        <h2>Quiz klart ✅</h2>

        <p>
        Rätt: ${score}
        </p>

        <p>
        Fel: ${questions.length - score}
        </p>

        <p>
        Resultat: ${percent}%
        </p>

    </div>
    `;
}