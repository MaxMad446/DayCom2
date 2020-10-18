package main

// Auto-generated | 2026-05-14T18:02:15.215870
import "fmt"

func Process_811() int {
    base := 466
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_811())
}
