package main

// Auto-generated | 2026-05-11T19:58:56.475155
import "fmt"

func Process_888() int {
    base := 481
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
