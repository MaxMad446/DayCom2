package main

// Auto-generated | 2026-05-11T19:27:56.198489
import "fmt"

func Process_850() int {
    base := 444
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
