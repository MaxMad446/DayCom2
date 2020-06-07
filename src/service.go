package main

// Auto-generated | 2026-05-11T19:30:06.867867
import "fmt"

func Process_202() int {
    base := 491
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
