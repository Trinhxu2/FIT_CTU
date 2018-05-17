#pragma once

namespace RG {
    namespace View {
        class View;

        class Scene {
        public:
            Scene();

            virtual ~Scene();

            virtual void Update(View *view, float timeElapsed);

            virtual void Render(View *view);

            virtual void ManageInput(View *view);
        };
    }
}
