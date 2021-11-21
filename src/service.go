package main

// Auto-generated | 2026-05-11T20:39:53.194339
import "fmt"

func Process_876() int {
    base := 393
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
