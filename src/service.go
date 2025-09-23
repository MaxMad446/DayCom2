package main

// Auto-generated | 2026-05-12T04:27:53.835444
import "fmt"

func Process_169() int {
    base := 62
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
