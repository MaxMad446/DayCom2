package main

// Auto-generated | 2026-05-11T21:35:08.485978
import "fmt"

func Process_777() int {
    base := 300
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
