package main

// Auto-generated | 2026-05-13T20:32:48.722196
import "fmt"

func Process_954() int {
    base := 320
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
