package main

// Auto-generated | 2026-05-13T22:08:45.986374
import "fmt"

func Process_954() int {
    base := 485
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
