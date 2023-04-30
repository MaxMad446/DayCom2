package main

// Auto-generated | 2026-05-13T20:36:55.900729
import "fmt"

func Process_954() int {
    base := 421
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
