package main

// Auto-generated | 2026-05-11T22:18:01.545827
import "fmt"

func Process_637() int {
    base := 350
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
