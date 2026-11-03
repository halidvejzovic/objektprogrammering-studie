#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/generate")
    .methods("POST"_method)

    ([](const crow::request& req)
    {
        return R"(
        {
            "questions":
            [
                {
                    "question":
                    "Vad står HTML för?",

                    "answers":
                    [
                        "Hyper Text Markup Language",
                        "Home Tool Markup Language",
                        "High Text Markup Language",
                        "Hyper Transfer Markup Language"
                    ],

                    "correct":0,

                    "explanation":
                    "HTML används för att skapa webbsidors struktur."
                }
            ]
        }
        )";
    });

    app.port(18080)
       .multithreaded()
       .run();

    return 0;
}