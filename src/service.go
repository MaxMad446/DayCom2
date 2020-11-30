package main

// Auto-generated | 2026-05-14T18:08:08.769320
import "fmt"

func Process_238() int {
    base := 57
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
