<template>
    <div class="grid-base">
        <div v-for="(feature, index) in features" :key="`feature-${index}`" class="col-span-3">
            <FeatureCard
                :title="feature.title"
                :text="feature.text"
                :icon="feature.icon"
            />
        </div>
    </div>
</template>

<script>
    import FeatureCard from "@/components/landing-page/FeatureCard.vue"

    export default {
        data() {
            return {
                features: [
                    {
                        title: "Highly compatible",
                        text: "Easy to use and works well with all major computer brands, gaming consoles and mobile devices. Plug & play, no installation or driver needed.",
                        icon: "icon-compatible.svg",
                    },
                    {
                        title: "Wireless with bluetooth",
                        text: "Powerful 2.4G RF technology allows you to connect the cordless keyboard from up to 30ft away. Simply plug the unifying receiver into your computer.",
                        icon: "icon-bluetooth.svg",
                    },
                    {
                        title: "High capacity battery",
                        text: "Equipped with a long-lasting built-in battery, you’ll never have to spend a dime on replaceable ones. Enjoy 40 hours of usage time between charges.",
                        icon: "icon-battery.svg",
                    },
                    {
                        title: "RGB backlit modes",
                        text: "Choose from 4 backlight brightness levels and adjustable breathing speed. Each key glows intensely in the dark and helps you type in low light conditions.",
                        icon: "icon-light.svg",
                    },
                ]
            }
        },
        components: {
            FeatureCard
        }
    }
</script>

<style scoped>

</style>